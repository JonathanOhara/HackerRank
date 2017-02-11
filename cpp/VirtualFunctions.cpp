static int student_id, professor_id;

class Person{
public:
    string name;
    int age;
    
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor: public Person{
public:
    int publications, cur_id;
    
    Professor(){
        professor_id++;
    }
    
    void getdata(){
        cin >> name >> age >> publications;
        cur_id = professor_id;
    }
    
    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

class Student: public Person{
public:
    int cur_id;
    int marks[6];
    
    Student(){
        student_id++;
        
        for( int i = 0; i < 6; i++ ){
            marks[i] = 0;
        }
    }
    
    void getdata(){
        cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
        cur_id = student_id;
    }
    
    void putdata(){
        int marksSum = 0;
        
        for( int i = 0; i < 6; i++ ){
            marksSum += marks[i];
        }
        cout << name << " " << age << " " << marksSum << " " << cur_id << endl;
    }
    
};