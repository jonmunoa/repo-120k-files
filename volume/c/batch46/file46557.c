// fichero 46557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46557;

Registro46557 crear_registro46557(int id) {
    Registro46557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
