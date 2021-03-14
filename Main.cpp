#include <iostream>
#include <vector>

void print_vector(const std::string& prompt, const std::vector<int>& vi);
void fibonacci(int x, int y, std::vector<int>& vi, int n);
int get_max_approximation();

int main()
{

    std::vector<int> vi = { 1, 2, 3 };

    print_vector(">", vi);

    std::vector<int> fibonacci_vi = { };

    fibonacci(3, 5, fibonacci_vi, 10);

    print_vector(">", fibonacci_vi);

    std::cout << get_max_approximation();

    std::cin.get();
}

void print_vector(const std::string& prompt, const std::vector<int>& vi)
{
    std::cout << prompt;

    for (int i : vi)
    {
        std::cout << " " << i;
    }

    std::cout << std::endl;
}

void fibonacci(int x, int y, std::vector<int>& vi, int n)
{
    vi.push_back(x);
    vi.push_back(y);

    for (int i = 2; i < n; ++i)
    {
        vi.push_back(vi[i - 2] + vi[i - 1]);
    }
}

int get_max_approximation()
{
    std::vector<int> anotehr_fibonacci_vi = { };

    fibonacci(1, 2, anotehr_fibonacci_vi, 50);

    for (int i = 1; i < anotehr_fibonacci_vi.size(); ++i)
    {
        if (anotehr_fibonacci_vi[i] < anotehr_fibonacci_vi[i - 1]) {
            return anotehr_fibonacci_vi[i - 1];
        }
    }

    return -1;
}