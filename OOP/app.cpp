#include <iostream>
#include "profile.hpp"

int main()
{

  Profile pro("Pete", 30, "Yaba", "Nigeria", "him/he");
  pro.add_hobby("listening to audiobooks and podcasts");
  std::cout << pro.view_profile() << "\n";
}