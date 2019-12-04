FROM ubuntu
RUN apt update -y && apt upgrade -y
RUN mkdir /abc
COPY cs /abc/
CMD [ "/abc/hello"]
