// fichero 33321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33321;

Registro33321 crear_registro33321(int id) {
    Registro33321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
