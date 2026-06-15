// fichero 16157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16157;

Registro16157 crear_registro16157(int id) {
    Registro16157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
