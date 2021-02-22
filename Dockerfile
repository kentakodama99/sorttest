FROM ubuntu:latest

WORKDIR /app/c

RUN apt-get update
RUN apt-get -y install sudo 
RUN sudo apt-get -y install build-essential
RUN sudo apt-get -y install git
RUN sudo apt-get -y install vim
RUN sudo apt-get -y install man
RUN sudo apt-get -y install manpages-dev
RUN apt-get install -y strace



CMD ["/bin/bash"]