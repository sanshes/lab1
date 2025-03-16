FROM ubuntu:latest

RUN apt-get update && apt-get install -y dpkg g++ build-essential

COPY lab1.deb /tmp/lab1.deb

RUN dpkg -i /tmp/lab1.deb || apt-get install -f
RUN chmod +x /usr/local/bin/lab2
ENTRYPOINT ["/usr/local/bin/lab2"]
CMD ["5"]
