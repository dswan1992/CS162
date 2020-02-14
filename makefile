#Program Name: FinalMakefile
#Author: Devin Swanson
#Date: 12/10/2019

CXX = g++
CXXFLAGS = -std=c++11

OBJS = Character.o FredAndDaphne.o ShaggyAndScooby.o Velma.o Object.o clueObject.o keyObject.o Space.o SafeSpace.o KeySpace.o ClueSpace.o HauntedHouse.o Visuals.o FinalHelperFunctions.o inputValidation.o Menu.o FinalProjectMain.o

SRCS = Character.cpp FredAndDaphne.cpp ShaggyAndScooby.cpp Velma.cpp Object.cpp clueObject.cpp keyObject.cpp Space.cpp SafeSpace.cpp KeySpace.cpp ClueSpace.cpp HauntedHouse.cpp Visuals.cpp FinalHelperFunctions.cpp inputValidation.cpp Menu.cpp FinalProjectMain.cpp

HEADERS = Character.hpp FredAndDaphne.hpp ShaggyAndScooby.hpp Velma.hpp Object.hpp clueObject.hpp keyObject.hpp Space.hpp SafeSpace.hpp KeySpace.hpp ClueSpace.hpp HauntedHouse.hpp Visuals.hpp FinalHelperFunctions.hpp inputValidation.hpp Menu.hpp

FinalProject: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o finalProject
${OBJS}:${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

.PHONY:clean
clean:
	rm ${OBJS} finalProject
