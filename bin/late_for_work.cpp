/**
 * @file late_for_work.cpp
 *
 * @version 01.01 2020-8-28
 *
 * @brief https://training.olinfo.it/#/task/ois_time/statement
 *
 * @ingroup late_for_work
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

#include <bits/stdc++.h>

int M0, M1, H0, H1, M, H;
using namespace std;

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
//  0 30 8 25 -> 7 55
// 22 30 7 15 -> 8 45
  cin >> H0 >> M0 >> H1 >> M1; // Take data

  H = H1 - H0;
  if(H<0) 
    H += 24;

  M = M1 - M0;
  if(M<0)
  {
    M += 60;
    H--;
  }

  if(H<0) 
    H += 24;

  cout << H << " " << M << endl;

  return 0;
}
