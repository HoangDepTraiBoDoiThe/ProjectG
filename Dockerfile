FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /ArchivedBuilds/LinuxServer

COPY /ArchivedBuilds/LinuxServer/ProjectGServer.sh /ArchivedBuilds/LinuxServer/

RUN chmod +x ProjectGServer.sh

EXPOSE 7777/udp 27015/udp

ENTRYPOINT ["./ProjectGServer.sh"]