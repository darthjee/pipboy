FROM gcc

RUN useradd -u 1000 app; \
    mkdir -p /home/app/app; \
    chown app.app -R /home/app

RUN apt-get update; \
    apt-get install -y libgtest-dev cmake build-essential googletest

WORKDIR /home/app/app
