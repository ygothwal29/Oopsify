#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int roll;
    string department;
};

int main()
{
    vector<Student> data;
    int n; //Number of test cases
    cin >> n; //Taking input n
    while (n--)
    {
        int q; 
        cin >> q; //Taking input value either 0 or 1
        if (q == 1)
        {
            Student temp; //creating a struct student if input is 1
            cin >> temp.name >> temp.roll >> temp.department; //Taking input related to that student
            data.push_back(temp);
        }
        else
        {
            int roll_check;
            cin >> roll_check; //If input is 0, check roll number
            for (int i = 0; i < data.size(); i++) //Iterating through list of students
            {
                if (data[i].roll == roll_check)  
                    cout << data[i].name << " " << data[i].roll << " " << data[i].department << endl; //Giving output of that particular student
            }
        }
    }

    return 0;
}