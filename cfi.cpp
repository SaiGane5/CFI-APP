#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
vector <float> ForceInteraction(float m1,vector <float> p1,float m2,vector <float> p2)
{
    const double G =6.67430e-11;
    vector <float> r12 {p2[0]-p1[0],p2[1]-p1[1],p2[2]-p1[2]};
    float distance=sqrt(pow(r12[0],2)+pow(r12[1],2)+pow(r12[2],2));
    float magnitude=(G * m1 * m2)/pow(distance,2);
    vector <float>unitr12{r12[0]/distance,r12[1]/distance,r12[2]/distance};
    vector <float> force{magnitude*unitr12[0],magnitude*unitr12[1],magnitude*unitr12[2]};
    return force;
}
int main()
{
    float m1,m2,x1,y1,z1,x2,y2,z2;
    
    
    cout<<"enter m1:";
    cin>>m1;
    cout<<"enter m2:";
    cin>>m2;
    cout<<"enter x1:";
    cin>>x1;
    cout<<"enter y1:";
     cin>>y1;
    cout<<"enter z1:";
     cin>>z1;
    cout<<"enter x2:";
     cin>>x2;
    cout<<"enter y2:";
     cin>>y2;
    cout<<"enter z2:";
     cin>>z2;
    vector <float> p1,p2,force;
    p1.push_back(x1);
    p1.push_back(y1);
    p1.push_back(z1);
    p2.push_back(x2);
    p2.push_back(y2);
    p2.push_back(z2);
    force=ForceInteraction(m1,p1,m2,p2);
    cout<<"force: (" <<force[0]<<","<<force[1]<<","<<force[2]<<")";
    return 0;

}