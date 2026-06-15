// fichero 38757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38757;

Registro38757 crear_registro38757(int id) {
    Registro38757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
