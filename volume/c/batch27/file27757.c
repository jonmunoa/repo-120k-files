// fichero 27757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27757;

Registro27757 crear_registro27757(int id) {
    Registro27757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
