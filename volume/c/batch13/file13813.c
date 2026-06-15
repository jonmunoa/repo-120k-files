// fichero 13813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13813;

Registro13813 crear_registro13813(int id) {
    Registro13813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
