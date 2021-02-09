FROM gcc:latest

RUN mkdir -p /home/app

COPY . /home/app

WORKDIR /home/app

RUN g++ -o CppContainer main.cpp

CMD ["./CppContainer"]
