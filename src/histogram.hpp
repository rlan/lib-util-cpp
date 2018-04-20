#ifndef HISTOGRAM_HPP_
#define HISTOGRAM_HPP_

#include <ostream>
#include <string>
#include <vector>

/**
 * Tracks histogram from 0 to n_bins-1. Values >= n_bins-1 are added to "n_bins-1".
 */
class UIntHistogram
{
  public:
    UIntHistogram(size_t n_bins, const std::string &name = "")
    : count_(n_bins)
    , name_(name)
    { }
    ~UIntHistogram()
    {
      std::cout << *this;
    }

    void push(size_t val)
    {
      if (val > count_.size() - 1)
        val = count_.size() - 1;
      count_[val]++;
    }

    friend std::ostream& operator<<(std::ostream&, const UIntHistogram&);

  protected:
    std::vector<size_t> count_;
    const std::string name_;
  private:
    UIntHistogram();
};

std::ostream& operator<<(std::ostream& os, const UIntHistogram& obj)
{
  if (obj.name_.size())
    os << obj.name_ << std::endl;
  for (size_t i = 0; i < obj.count_.size(); i++) {
    os << i << ":" << obj.count_[i] << " ";
    if ((i+1) % 10 == 0)
      os << std::endl;
  }
  os << std::endl;
  return os;
}

#endif // HISTOGRAM_HPP_
