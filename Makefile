cfol = controller
sfol = services
mfol = models
ffol = factory
all:
	+$(MAKE) -C $(cfol)
	echo "final make"
	$(CXX) simpleSplit.cpp $(cfol)/*.o $(ffol)/*.o $(sfol)/*.o $(mfol)/*.o -o app -std=c++17
