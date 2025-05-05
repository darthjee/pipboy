.PHONY: build-dev ensure-image dev

IMAGE=pipboy-test

build-dev:
	docker build . -f Dockerfile -t $(IMAGE)

ensure-image:
	if ! (docker images |  grep $(IMAGE)); then \
	  make build-dev; \
	fi

dev:
	docker-compose -f docker-compose.yml run $(IMAGE) /bin/bash
