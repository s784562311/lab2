#include<cmath>
using namespace std;
class Rating{
        public:
                Rating();
        void setK(int data1);
        void setRA(int data2);
        void setRB(int data3);
        double findEA();
        double findEB();
        void findNewRA();
        void findNewRB();
        void resetStatus(double data4);
        int getRA();
        int getRB();
        private:
                int K;
                double RA,RB,EA,EB,result,NewRA,NewRB;
};

