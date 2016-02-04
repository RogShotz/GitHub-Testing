################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Cpp_Strings/StringStream.cpp \
../Cpp_Strings/Strings.cpp 

OBJS += \
./Cpp_Strings/StringStream.o \
./Cpp_Strings/Strings.o 

CPP_DEPS += \
./Cpp_Strings/StringStream.d \
./Cpp_Strings/Strings.d 


# Each subdirectory must supply rules for building sources it contributes
Cpp_Strings/%.o: ../Cpp_Strings/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


