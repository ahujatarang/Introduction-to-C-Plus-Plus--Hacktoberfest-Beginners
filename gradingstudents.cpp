int main()
{
    int n;
    cin >> n;
    vector<int> grades(n);
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
    }
    for(int j = 0; j<n; ++j)
    {
        if((grades[j] >= 38) && (grades[j]%5 > 2))
        {
            grades[j] = grades[j] + (5 - grades[j]%5);
        }
    }
    for (int z = 0; z < n; ++z)
    {
        cout << grades[z] << " ";
    }
    
}
