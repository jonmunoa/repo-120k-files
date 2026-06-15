// fichero 33725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33725;

Registro33725 crear_registro33725(int id) {
    Registro33725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
