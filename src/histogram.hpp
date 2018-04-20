#ifndef HISTOGRAM_HPP_
#define HISTOGRAM_HPP_

#include <ostream>

/**
 * Tracks histogram from 0 to n_bins-1. Values >= n_bins-1 are added to "n_bins-1".
 */
class UIntHistogram
{
  public:
    UIntHistogram(size_t n_bins)
    : count_(n_bins)
    { }
    ~UIntHistogram()
    { }

    void push(size_t val)
    {
      if (val > count_.size() - 1)
        val = count_.size() - 1;
      count_[val]++;
    }

    friend std::ostream& operator<<(std::ostream&, const UIntHistogram&);

  protected:
    std::vector<size_t> count_;
  private:
    UIntHistogram();
};

std::ostream& operator<<(std::ostream& os, const UIntHistogram& obj)
{
  for (size_t i = 0; i < obj.count_.size(); i++) {
    os << i << ":" << obj.count_[i] << " ";
    if ((i+1) % 10 == 0)
      os << std::endl;
  }
  os << std::endl;
}

#endif // HISTOGRAM_HPP_
