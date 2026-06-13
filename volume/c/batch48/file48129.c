// fichero 48129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48129;

Registro48129 crear_registro48129(int id) {
    Registro48129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48129(Registro48129 r) {
    return r.valor + r.id;
}
