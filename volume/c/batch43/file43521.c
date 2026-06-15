// fichero 43521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43521;

Registro43521 crear_registro43521(int id) {
    Registro43521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
