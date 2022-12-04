#include "student.h"
int main()
{
    student info;
    string ID, Name;
    double myMath, IT, myEnglish;
    cout << "Please, input your name" << endl;
    getline(cin, Name);
    cout << "Please, input your ID" << endl;
    getline(cin, ID);
    cout << "Please, input your score for English" << endl;
    cin >> myEnglish;
    cout << endl;
    cout << "Please, input your score for Math" << endl;
    cin >> myMath;
    cout << endl;
    cout << "Please, input your score for IT" << endl;
    cin >> IT;
    cout << endl;
    info.setName(Name);
    info.setID(ID);
    info.setMath(myMath);
    info.setEnglish(myEnglish);
    info.setIT(IT);
    info.displaymassage();

    system("pause");
    return 0;
}
