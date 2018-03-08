while(it!=country.end())    {        cout<<it->first<<" - "<<it->second<<endl;        sum=sum+it->second;        it++;    }    cout<<sum;
