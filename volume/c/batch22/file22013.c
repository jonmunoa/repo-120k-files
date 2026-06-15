// fichero 22013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22013;

Registro22013 crear_registro22013(int id) {
    Registro22013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
