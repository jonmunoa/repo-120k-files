// fichero 22921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22921;

Registro22921 crear_registro22921(int id) {
    Registro22921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
