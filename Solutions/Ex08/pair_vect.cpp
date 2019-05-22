#include "pair_vect.h"

pair_vect::pair_vect(int i1 , int j1, int k1, int i2 , int j2, int k2):vector1(i1,j1,k1), vector2(i2,j2,k2)
{}

pair_vect::pair_vect(vector v1,vector v2):vector1(v1),vector2(v2)
{}

vector & pair_vect::get_vector(int i)
{
  if (i==1) return vector1;
  return vector2;
}
