all: robotic_arm.out

robotic_arm.out: main.o RoboticArm.o
	g++ -o robotic_arm.out main.o RoboticArm.o

main.o: main.cpp RoboticArm.h
	g++ -c main.cpp

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	g++ -c RoboticArm.cpp

clean:
	rm -f main.o RoboticArm.o robotic_arm.out

test: all
	./robotic_arm.out

.PHONY: all clean test
