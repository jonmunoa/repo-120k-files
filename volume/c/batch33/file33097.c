// fichero 33097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33097;

Registro33097 crear_registro33097(int id) {
    Registro33097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
