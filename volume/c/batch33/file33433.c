// fichero 33433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33433;

Registro33433 crear_registro33433(int id) {
    Registro33433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
