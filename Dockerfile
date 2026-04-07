FROM gcc:latest

WORKDIR /app

COPY main.c .

RUN gcc -o zbir main.c

CMD ["./zbir"]

