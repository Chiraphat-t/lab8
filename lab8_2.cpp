#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//[Missing Code 1] Write definition of the function findGrade() here.

char findGrade(double s){
	char g;
	if(s>90){
		g ='A';
	}
	else if(s>75){
		g ='B';
	}
	else if(s>60){
		g ='C';
	}
	else if(s>45){
		g ='D';
	}
	else{
		g='F';
	}
	return g;
}


int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		//[Missing Code 2] Get name of the i-th students that may include whitespace.
		getline(cin,name[i]);
        
        cout << "Score of student " << i+1 << ": ";
		//[Missing Code 3] Get score of the i-th students.
		cin >> score[i];
        
        i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}