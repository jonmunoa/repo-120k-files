// fichero 33937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33937;

Registro33937 crear_registro33937(int id) {
    Registro33937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
