std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { //Error: Accessing vec[vec.size()] is out of bounds
  std::cout << vec[i] << " ";
}
std::cout << std::endl; //This line may not be reached due to potential exception