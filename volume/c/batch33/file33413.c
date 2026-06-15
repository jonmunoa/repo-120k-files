// fichero 33413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33413;

Registro33413 crear_registro33413(int id) {
    Registro33413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
