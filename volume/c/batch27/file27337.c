// fichero 27337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27337;

Registro27337 crear_registro27337(int id) {
    Registro27337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
