/*************************************************************************
    > File Name: cd.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 22 Jul 2017 08:58:23 PM CST
 ************************************************************************/
// base class
#ifndef CHAPTER13_CD_H_
#define CHAPTER13_CD_H_
class Cd {  // represents a CD disk
 private:
  char performers[50];
  char label[20];
  int selections;   // number of selections
  double playtime;  // playing time in minutes
 public:
  Cd(char * s1, char * s2, int n, double x);
//  Cd(const Cd & d);
  virtual void Report() const;  // reports all CD data
//  Cd & operator=(const Cd & d);
  virtual  ~Cd() {}
};
#endif  // CHAPTER13_CD_H_
