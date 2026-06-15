// fichero 22585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22585;

Registro22585 crear_registro22585(int id) {
    Registro22585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
