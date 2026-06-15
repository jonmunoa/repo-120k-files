// fichero 33297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33297;

Registro33297 crear_registro33297(int id) {
    Registro33297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
