#if !defined(RANDOM_WALK_HEADER)
#define RANDOM_WALK_HEADER

class Random_Walk {
private:
  unsigned Length;
  int * X;

public:
  // Constructor
  Random_Walk(const unsigned Length_In);

  // Destructor
  ~Random_Walk(void);

  // This method actually performs the random walk
  void Walk(void);

  // Operator overloading
  int operator()(const unsigned i) const;

  // Getter methods
  void Get_Xn(const unsigned i,                                                // Intent: Read
              int & Xn) const;                                                 // Intent: Write
  void Get_Length(unsigned & Len_Out) const;                                   // Intent: Write
}; // class Random_Walk {

#endif
