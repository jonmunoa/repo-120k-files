// fichero 48129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48129;

Registro48129 crear_registro48129(int id) {
    Registro48129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
