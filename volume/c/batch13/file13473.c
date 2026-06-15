// fichero 13473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13473;

Registro13473 crear_registro13473(int id) {
    Registro13473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
