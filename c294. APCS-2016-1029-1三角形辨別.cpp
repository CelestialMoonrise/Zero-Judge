/******************************************************************************

c294. APCS-2016-1029-1三角形辨別

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void
print_vector (vector < int >v)
{
  vector < int >::iterator it;
  for (it = v.begin (); it != v.end (); it++)
    {
      cout << *it << " ";
    }
  cout << endl;
}

int
main ()
{
  long a, b, c, s=0, cs=0;
  cin >> a >> b >> c;
  vector < int >vect;
  vect.push_back (a);
  vect.push_back (b);
  vect.push_back (c);

  sort (vect.begin (), vect.end ());
  print_vector(vect);

  a = vect[0];
  b = vect[1];
  c = vect[2];
  s = (a*a)+(b*b);
  cs= (c*c);

  if ((a + b) < c)
    {
      cout << "No";
    }

  else if (s < cs)
    {
      cout << "Obtuse";
    }

  else if (s == cs)
    {
      cout << "Right";  
    }
  else if (s > cs)
    {
      cout << "Acute";
    }
    
    return 0;
}
  

