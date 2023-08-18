#include<iostream>
using namespace std;
class CodesCracker
{
    private:
        float len, wid;
    public:
        void getData();
        float areaOfRect();
        float periOfRect();
};
void CodesCracker::getData()
{
    cout<<"Enter Length and width of Rectangle: ";
    cin>>len>>wid;
}
float CodesCracker::areaOfRect()
{
    return (len*wid);
}
int main()
{
    CodesCracker c;
    float area, per;
    c.getData();
    area = c.areaOfRect();
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
