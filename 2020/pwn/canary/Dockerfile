# sudo docker build -t canary .
# sudo docker run -d -p 30001:30001 --rm -it canary

FROM ubuntu:20.04
MAINTAINER unknonwn
LABEL Description="write-it" VERSION='1.0'

#installation
RUN apt update
RUN apt install -y socat

#user
RUN adduser --disabled-password --gecos '' pwn
RUN chown -R root:pwn /home/pwn/
RUN chmod 750 /home/pwn

RUN touch /home/pwn/flag.txt

RUN export TERM=xterm

#Copying file
WORKDIR /home/pwn/
COPY ./canary /home/pwn
COPY flag.txt /home/pwn

#Setting perm..
RUN chown root:pwn /home/pwn/flag.txt
RUN chmod +x /home/pwn/canary
RUN chmod 440 /home/pwn/flag.txt

EXPOSE 30001

#Run the program with socat
CMD su pwn -c "socat TCP-LISTEN:30000,reuseaddr,fork EXEC:/home/pwn/canary"
