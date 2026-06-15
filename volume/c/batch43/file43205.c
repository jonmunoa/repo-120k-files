// fichero 43205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43205;

Registro43205 crear_registro43205(int id) {
    Registro43205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
