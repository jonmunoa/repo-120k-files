// fichero 14921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14921;

Registro14921 crear_registro14921(int id) {
    Registro14921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
