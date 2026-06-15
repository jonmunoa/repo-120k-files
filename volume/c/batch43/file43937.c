// fichero 43937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43937;

Registro43937 crear_registro43937(int id) {
    Registro43937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
