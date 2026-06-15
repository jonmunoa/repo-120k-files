// fichero 33521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33521;

Registro33521 crear_registro33521(int id) {
    Registro33521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
