#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct Rope {
private:
  Rope *left;
  Rope *right;
  Rope *parent;
  string val;
  int weight;

  Rope() {
    left = nullptr;
    right = nullptr;
    parent = nullptr;
    val = "";
    weight = 0;
  }
  Rope(string s) {
    left = nullptr;
    right = nullptr;
    val = s;
    weight = s.length();
  }

public:
  string search(Rope *root, int pos) {
    if (root->weight < pos) {
      return "";
    } else {
      if (root->left->weight >= pos && root->left) {
        return search(root->left, pos);
      } else if (root->right) {
        return search(root->right, pos - root->left->weight);
      } else {
        return "";
      }
    }
  }
};
int main() {

  string s;
  istream &in = cin;
  getline(in, s);

  return 0;
}
