/* CSCI 261 Assignment 01: Hello World and ASCII Art
*
* Author: Christian Nieves
*
*
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello Christian!!" << endl; // add your name

    // ASCII art from http://loveascii.com/smilies.html
    cout << "                          oooo$$$$$$$$$$$$oooo" << endl;
    cout << "                      oo$$$$$$$$$$$$$$$$$$$$$$$$o" << endl;
    cout << "                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$" << endl;
    cout << "   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$" << endl;
    cout << "oo $ $ \"$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$" << endl;
    cout << "\"$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$" << endl;
    cout << "  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  \"\"\"$$$" << endl;
    cout << "   \"$$$\"\"\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$" << endl;
    cout << "    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$o" << endl;
    cout << "   o$$\"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o" << endl;
    cout << "   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" \"$$$$$$ooooo$$$$o" << endl;
    cout << "  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$" << endl;
    cout << "  $$$$$$$$\"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$\"\"\"\"\"\"\"\"" << endl;
    cout << " \"\"\"\"       $$$$    \"$$$$$$$$$$$$$$$$$$$$$$$$$$$$\"      o$$$" << endl;
    cout << "            \"$$$o     \"\"\"$$$$$$$$$$$$$$$$$$\"$$\"         $$$" << endl;
    cout << "              $$$o          \"$$\"\"$$$$$$\"\"\"\"           o$$$" << endl;
    cout << "               $$$$o                                o$$$\"" << endl;
    cout << "                \"$$$$o      o$$$$$$o\"$$$$o        o$$$$" << endl;
    cout << "                  \"$$$$$oo     \"\"$$$$o$$$$$o   o$$$$\"\"" << endl;
    cout << "                     \"\"$$$$$oooo  \"$$$o$$$$$$$$$\"\"\"" << endl;
    cout << "                        \"\"$$$$$$$oo $$$$$$$$$$" << endl;
    cout << "                                \"\"\"\"$$$$$$$$$$$" << endl;
    cout << "                                    $$$$$$$$$$$$" << endl;
    cout << "                                     $$$$$$$$$$\"" << endl;
    cout << "                                      \"$$$\"\"\"\"" << endl;

    // information about myself
    const int my_age = 18;
    const int espressos_today = 2;
    const int expected_graduation = 2020;

    // print my information
    cout << "Hello World!" << endl;
    cout << "I am " << my_age << " years old." << endl;
    cout << "I have had " << espressos_today << " cups of espresso today" << endl;
    cout << "I am hoping to graduate in the year " << expected_graduation << endl;
    cout << "Have a good day. Goodbye!" << endl;

    return 0;
}
