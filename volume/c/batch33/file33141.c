// fichero 33141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33141;

Registro33141 crear_registro33141(int id) {
    Registro33141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
