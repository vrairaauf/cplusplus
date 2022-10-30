class Mobile{
private:
	std::string marque;
	unsigned int number;
public:
	void setMarque(std::string marque);
	void setNumber(unsigned int number);
	unsigned int getNumber();
	std::string getMarque();
	Mobile(std::string marque, unsigned int number);
};