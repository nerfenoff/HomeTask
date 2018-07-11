#include <vector>
#include <iostream>


bool task1(int n)
{
    std::vector<int> numbers;
    int result = 0;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size();++i)
    {

        for(unsigned int j = 1 + i; j < numbers.size(); ++j)
        {
            if(numbers[i] == numbers[j])
            {
                ++result;
                if(result >= 2) return false;
            }
        }
        result = 0;
    }
    return true;
}

bool task2(int n)
{
    std::vector<int> numbers;
    int result = 1;
    int chek = 0;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size();++i)
    {
        for(unsigned int j = 1; j < numbers.size(); ++j)
        {
            if(numbers[0] == numbers[j])
            {
                ++result;
                numbers.erase(numbers.begin() + j);
                --j;
                if(result == 3) ++chek;
                if(result > 3)
                {
                    --chek;
                    return false;
                }
            }
        }
        if(result == 2) return false;
        result = 1;
        numbers.erase(numbers.begin());
    }

    if (chek == 1) return true;
    else return false;
}

bool task3(int n)
{
    std::vector<int> numbers;
    unsigned int result = 0;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size()/2;++i)
        if(numbers[i] == numbers[numbers.size()-1-i])
            ++result;
    if(result == numbers.size()/2) return true;
    else return false;
}

bool task4(int n)
{
    std::vector<int> numbers;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size();++i)
    {

        for(unsigned int j = 1 + i; j < numbers.size(); ++j)
        {
            if(numbers[i] == numbers[j]) return false;
        }
    }
    return true;
}

bool task5(int n)
{
    std::vector<int> numbers;
    int result = 1;
    int chek = 0;
    int k = 0;

    std::cout << "input k: ";
    std::cin >> k;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size();++i)
    {
        for(unsigned int j = 1; j < numbers.size(); ++j)
        {
            if(numbers[0] == numbers[j])
            {
                ++result;
                numbers.erase(numbers.begin() + j);
                --j;
                if(result == k) ++chek;
                if(result > k)
                {
                    --chek;
                    return false;
                }
            }
        }
        if((result < k || result > k) && result != 1) return false;
        result = 1;
        numbers.erase(numbers.begin());
    }

    if (chek == 1) return true;
    else return false;
}

bool task6(int n)
{
    std::vector<int> numbers;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size(); ++i)
        for(unsigned int j = 1 + i; j < numbers.size();++j)
            if(numbers[i] == numbers[j]) return false;
    return true;
}

bool task7(int n)
{
    return task1(n);
}

bool task8(int n)
{
    std::vector<int> numbers;
    int temp = 1;
    int result = 1;
    int k = 0;

    std::cout << "input k: ";
    std::cin >> k;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size();++i)
    {
        for(unsigned int j = 1; j < numbers.size(); ++j)
        {
            if(numbers[0] == numbers[j])
            {
                ++temp;
                numbers.erase(numbers.begin()+j);
                --j;
            }
        }
        if(temp != 1)
            result += temp;
        temp = 1;
        numbers.erase(numbers.begin());
    }

    if(result > k) return true;
    else return false;
}

bool task9(int n)
{
    std::vector<int> numbers;
    int sum1 = 0;
    int sum2 = 0;


    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    int k = numbers.size() + 1;

    std::cout << "input k: ";
    std::cin >> k;

    while (k > numbers.size())
    {
        std::cout << "k > number of digits in the 'n'" << std::endl;
        std::cout << "input new k in the range of 0 to " << numbers.size() << " : ";
        std::cin >> k;
    }

    for(int i = 0; i < k; ++i)
    {
        sum1 += numbers[numbers.size() - 1 - i];
        sum2 += numbers[i];
    }

    if(sum1 == sum2) return true;
    else return false;
}

bool task10(int n)
{
    return task8(n);
}

bool task11(int n)
{
    std::vector<int> numbers;
    int m = 0;
    int k = 0;
    int result = 0;

    std::cout << "input k: ";
    std::cin >> k;

    std::cout << "input m: ";
    std::cin >> m;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    for(unsigned int i = 0; i < numbers.size();++i)
        if(numbers[i] < m) ++result;

    if(result == k) return true;
    else return false;
}

bool task12(int n)
{
    std::vector<int> numbers;
    int k = 0;
    int sum = 0;
    int result = 0;

    while(n)
    {
        numbers.push_back(n%10);
        n/=10;
    }

    sum = numbers[numbers.size() - 1] + numbers[numbers.size()-2];
    std::cout << "sum: " << sum << std::endl;
    std::cout << "input k: ";
    std::cin >> k;

    for(unsigned int i = 2; i < numbers.size();++i)
    {
        if(numbers[i] > sum) ++result;
    }

    if(result > k) return true;
    else return false;
}
