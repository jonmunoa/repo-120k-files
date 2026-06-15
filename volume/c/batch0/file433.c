// fichero 433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro433;

Registro433 crear_registro433(int id) {
    Registro433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
