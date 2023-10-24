FROM gcc AS BUILD

WORKDIR /compiled
COPY ./src .
RUN gcc -Wall -o program_c main.c

FROM debian

WORKDIR /app
COPY --from=BUILD /compiled/program_c /app

CMD ["./program_c"]
