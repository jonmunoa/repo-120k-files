// fichero 13597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13597;

Registro13597 crear_registro13597(int id) {
    Registro13597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
