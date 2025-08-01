/*
Class Academic contains marks info, Sports contains sports score. Create class Result that inherits both and shows total.
*/
#include<iostream>
using namespace std;

// Base class for academic marks
class Academic {
protected:
    int academicMarks;

public:
    void setAcademicMarks(int marks) {
        academicMarks = marks;
    }

    void showAcademic() {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

// Base class for sports score
class Sports {
protected:
    int sportsScore;

public:
    void setSportsScore(int score) {
        sportsScore = score;
    }

    void showSports() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

// Derived class combining both
class Result : public Academic, public Sports {
public:
    void showTotal() {
        int total = academicMarks + sportsScore;
        showAcademic();
        showSports();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    r.setAcademicMarks(85);
    r.setSportsScore(15);
    r.showTotal();

    return 0;
}
