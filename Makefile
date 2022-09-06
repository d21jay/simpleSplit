cfol = controller
sfol = services
mfol = models
all:
	+$(MAKE) -C $(cfol)
	echo "final make"
	$(CXX) simpleSplit.cpp $(cfol)/*.o $(sfol)/*.o $(mfol)/*.o -o app -std=c++17
