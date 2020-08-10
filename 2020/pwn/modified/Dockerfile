# sudo docker build -t modified .
# sudo docker run -d -p 30000:30000 --rm -it modified

FROM ubuntu:20.04

RUN apt-get update

RUN useradd -d /home/ctf/ -m -p ctf -s /bin/bash ctf
RUN echo "ctf:ctf" | chpasswd

WORKDIR /home/ctf

COPY modified .
COPY flag.txt .
COPY ynetd .

RUN chown -R root:root /home/ctf

USER ctf
EXPOSE 30000
CMD ./ynetd -p 30000 ./modified
