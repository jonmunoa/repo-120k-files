// fichero 16921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16921;

Registro16921 crear_registro16921(int id) {
    Registro16921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
