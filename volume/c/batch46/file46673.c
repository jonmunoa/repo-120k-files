// fichero 46673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46673;

Registro46673 crear_registro46673(int id) {
    Registro46673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
