#include <cctype>
#include <iomanip>
#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool isValidName(const string &name);
bool isValidDate(const string &date);
bool isCardNumberValid(string &cardNumber);
bool isUKPostCodeValid(string postCode);

int main() {
  string name, address, postCode, cardNumber, expiryDate, secretCode;
  int bakedBeans, popcorn, evaporatedMilk, bread;
  const double bakedBeansPrice = 1.20, popcornPrice = 0.80,
               evaporatedMilkPrice = 1.15, breadPrice = 2.34;
  const double VAT_RATE = 0.20;

  cout << "Enter the shopper's name: ";
  getline(cin, name);
  while (!isValidName(name)) {
    cout << "Invalid name. Please enter a valid name: ";
    getline(cin, name);
  }

  cout << "Enter the shopper's address: ";
  getline(cin, address);

  cout << "Enter the shopper's post code: ";
  getline(cin, postCode);
  while (!isUKPostCodeValid(postCode)) {
    cout << "Invalid post code. ";
    cout << "Enter the Valid post code: ";
    getline(cin, postCode);
  }

  cout << "Enter the payment card number: ";
  getline(cin, cardNumber);

  while (!isCardNumberValid(cardNumber)) {
    cout << "Invalid Card number." << endl;
    cout << "Enter the payment card number: ";
    getline(cin, cardNumber);
  }

  cout << "Enter the card expiry date (DD/MM/YY): ";
  getline(cin, expiryDate);
  while (!isValidDate(expiryDate)) {
    cout << "Invalid date format. Enter the expiry date again (DD/MM/YY): ";
    getline(cin, expiryDate);
  }

  cout << "Enter the secret code: ";
  getline(cin, secretCode);

  cout << "Enter the number of Baked Beans: ";
  cin >> bakedBeans;

  cout << "Enter the number of Popcorn: ";
  cin >> popcorn;

  cout << "Enter the number of Evaporated Milk: ";
  cin >> evaporatedMilk;

  cout << "Enter the number of Bread: ";
  cin >> bread;

  double totalCost = (bakedBeans * bakedBeansPrice) + (popcorn * popcornPrice) +
                     (evaporatedMilk * evaporatedMilkPrice) +
                     (bread * breadPrice);
  double VAT = totalCost * VAT_RATE;
  double grandTotal = totalCost + VAT;

  cout << endl << "RECEIPT:" << endl;
  cout << left << setw(20) << "Name:" << left << setw(20) << name << endl;
  cout << left << setw(20) << "Address:" << left << setw(20) << address << endl;
  cout << left << setw(20) << "Post Code:" << left << setw(20) << postCode
       << endl;
  cout << left << setw(20) << "Card Number:" << left << setw(20) << cardNumber
       << endl;
  cout << left << setw(20) << "Expiry Date:" << left << setw(20) << expiryDate
       << endl;
  cout << left << setw(20) << "Secret Code:" << left << setw(20) << secretCode
       << endl
       << endl;

  cout << left << setw(20) << "Baked Beans:" << left << setw(20) << bakedBeans
       << " x " << bakedBeansPrice << " = " << bakedBeans * bakedBeansPrice
       << endl;
  cout << left << setw(20) << "Popcorn:" << left << setw(20) << popcorn << " x "
       << popcornPrice << " = " << popcorn * popcornPrice << endl;
  cout << left << setw(20) << "Evaporated Milk:" << left << setw(20)
       << evaporatedMilk << " x " << evaporatedMilkPrice << " = "
       << evaporatedMilk * evaporatedMilkPrice << endl;
  cout << left << setw(20) << "Bread:" << left << setw(20) << bread << " x "
       << breadPrice << " = " << bread * breadPrice << endl
       << endl;

  cout << left << setw(20) << "Total Cost:" << left << setw(20) << totalCost
       << endl;
  cout << left << setw(20) << "VAT (20%):" << left << setw(20) << VAT << endl;
  cout << left << setw(20) << "Grand Total:" << left << setw(20) << grandTotal
       << endl;

  return 0;
}

bool isUKPostCodeValid(string postCode) {
  // Check that the post code meets the minimum length requirement
  if (postCode.length() < 5) {
    return false;
  }

  // Define regular expression pattern for UK post codes
  std::regex pattern("^[A-Z]{1,2}[0-9R][0-9A-Z]? [0-9][A-Z]{2}$");

  // Check if the post code matches the pattern
  return std::regex_match(postCode, pattern);
}

bool isCardNumberValid(string &cardNumber) {
  // Check that the length is 16 digits
  if (cardNumber.length() != 16) {
    return false;
  }

  // Check that all characters are digits
  for (char c : cardNumber) {
    if (!isdigit(c)) {
      return false;
    }
  }

  // Apply the Luhn algorithm checksum test
  int sum = 0;
  bool doubleNext = false;
  for (int i = cardNumber.length() - 1; i >= 0; i--) {
    int digit = cardNumber[i] - '0';
    if (doubleNext) {
      digit *= 2;
      if (digit > 9) {
        digit -= 9;
      }
    }
    sum += digit;
    doubleNext = !doubleNext;
  }

  return sum % 10 == 0;
}

bool isValidName(const string &name) {
  for (char c : name) {
    if (!isalnum(c) && !isspace(c)) {
      return false;
    }
  }
  return true;
}

bool isValidDate(const string &date) {
  regex datePattern("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[012])/([0-9]{2})$");
  return regex_match(date, datePattern);
}