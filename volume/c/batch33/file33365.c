// fichero 33365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33365;

Registro33365 crear_registro33365(int id) {
    Registro33365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
