// fichero 46921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46921;

Registro46921 crear_registro46921(int id) {
    Registro46921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
