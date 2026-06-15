// fichero 27921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27921;

Registro27921 crear_registro27921(int id) {
    Registro27921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
