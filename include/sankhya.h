/**
 * TODO(raghu): Learn karatsuba algorithm for multiplication 
 *              Implement addition, substraction
 *              Also look at Schonhage-Strassen Algorithm and Toom-Cook algorithm 
 *              for a faster alternative to karatsuba algorithm
 */

// we are borrowing the implementation from cpython
namespace sankhya {

using BintVec = std::vector<uint32_t>;
using String = std::string;

class Bint {
public:
  Bint() {
  
  }
  
  Bint(const char* num) {
  
  }

  Bint(const String& num) {
  
  }

  Bint(const Bint& bint) {
  
  }

  const Bint& operator=(const char* num) {
  
  }

  const Bint& operator=(const String& num) {
  
  }
 
  const Bint& operator=(const Bint& bint) {
  
  }

  const Bint& operator=()
  
  // addition
  Bint operator+(const Bint& bint) {
    
  }

  // substraction
  Bint operator-(const Bint& bint) {
  
  }

  // multiplication
  Bint operator*(const Bint& bint) {
  
  }

  // division
  Bint operator/(const Bint& bint) {
  
  }

  // modulo/remainder
  Bint operator%(const Bint& bint) {
  
  }

  const Bint& operator+=(Bint& rhs) {
  
  }

  const Bint& operator-=(Bint& rhs) {
  
  }

  const Bint& operator*=(Bint& rhs) {
  
  }

  const Bint& operator/=(Bint& rhs) {
  
  }
  
  const Bint& operator%=(Bint& rhs) {
  
  }
  
  // power
  Bint pow(Bint& base, Bint& exponent) {
  
  }
  
  // pre-increment
  const Bint& operator++() {
  }

  // post-increment
  Bint operator++() {
  
  }

  // pre-decrement
  const Bint& operator--() {
  
  }

  // post-decrement
  Bint operator++() {
  
  }

  bool operator==(const Bint& rhs) {
  
  }

  bool operator!=(const Bint& rhs) {
  
  }

  bool operator<(const Bint& rhs) {
  
  }

  bool operator<=(const Bint& rhs) {
  
  }

  bool operator>(const Bint& rhs) {
  
  }

  bool operator>=(const Bint& rhs) {
  
  }

  template <typename Type>
  bool is_bint(Type type) {
  
  }

  bool is_int() {
  
  }

  bool is_int32() {
  
  }

  bool is_int64() {
  
  }

  bool is_uint() {
  
  }

  bool is_uint32() {
  
  }

  bool is_uint64() {
  
  }

  String& to_string() const {
  
  }
 private:
  BintVec bint_vec_; // bint_vec_[0] = sign byte
  String repr;
};

}
