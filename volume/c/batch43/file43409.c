// fichero 43409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43409;

Registro43409 crear_registro43409(int id) {
    Registro43409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
