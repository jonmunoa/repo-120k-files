// fichero 37805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37805;

Registro37805 crear_registro37805(int id) {
    Registro37805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
