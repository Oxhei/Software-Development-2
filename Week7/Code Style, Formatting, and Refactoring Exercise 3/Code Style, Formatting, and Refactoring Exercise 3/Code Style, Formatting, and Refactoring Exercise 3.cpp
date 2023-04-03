// *****************  Changes *****************
// Renamed the functions and variables to be more descriptive.
// Fixed the formatting of the code for consistency.
// Added comments to explain what each function does.
// Changed the way that the file is read to avoid reading past the end of the file.

#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using std::cout;
using std::default_random_engine;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::random_device;
using std::string;
using std::uniform_int_distribution;
using std::vector;

vector<int> generateRandomIntegers(int size) {
  random_device rd;
  default_random_engine engine(rd());
  uniform_int_distribution<int> dist;
  vector<int> nums;
  for (int i = 0; i < size; ++i) {
    nums.push_back(dist(engine));
  }
  return nums;
}

void bubbleSort(vector<int>& nums) {
  for (int i = 0; i < nums.size(); ++i) {
    for (int j = 0; j < nums.size() - (i + 1); ++j) {
      if (nums[j] > nums[j + 1]) {
        int temp = nums[j + 1];
        nums[j + 1] = nums[j];
        nums[j] = temp;
      }
    }
    if (i % 1000 == 0) {
      cout << ((float)i / (float)nums.size()) * 100.0 << "% sorted" << endl;
    }
  }
}

void writeToFile(const string& filename, const vector<int>& nums) {
  ofstream outFile(filename);
  for (int num : nums) {
    outFile << num << endl;
  }
  outFile.close();
}

vector<int> readFromFile(const string& filename) {
  vector<int> nums;
  ifstream inFile(filename);
  int num;
  while (inFile >> num) {
    nums.push_back(num);
  }
  return nums;
}

int main(int argc, char** argv) {
  vector<int> nums = generateRandomIntegers(65536);
  writeToFile("numbers.txt", nums);
  bubbleSort(nums);
  vector<int> sortedNums = readFromFile("numbers.txt");
  for (int i = 0; i < 100; ++i) {
    cout << nums[i] << "\t" << sortedNums[i] << endl;
  }
  return 0;
}
