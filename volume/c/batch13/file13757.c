// fichero 13757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13757;

Registro13757 crear_registro13757(int id) {
    Registro13757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
