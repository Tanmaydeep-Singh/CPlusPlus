
    #include<iostream>
    using namespace std;
    class set
    {
    public:
        int g,sum1,sum2;
    sum(int g)
    {
        sum1=g;
    }
        add(set a,set b)
        {
            if( a.sum1>b.sum1)
                cout<<a.sum1;
            else
                cout<<b.sum1;
                }

    };
    main()
    {
        int N1,N2,N3,N4,sum1,sum2;
        set A,B,C;
        cout<<"Enter two numbers\n";
        cin>>N1>>N2;

        sum1=N1+N2;

        A.sum(sum1);
        cout<<"Enter two more numbers\n";
        cin>>N3>>N4;
        sum2=N3+N4;
        B.sum(sum2);
        C.add(A,B);///Passing object as argument
    }
