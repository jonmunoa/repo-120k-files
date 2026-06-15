// fichero 43433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43433;

Registro43433 crear_registro43433(int id) {
    Registro43433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
