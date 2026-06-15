// fichero 46037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46037;

Registro46037 crear_registro46037(int id) {
    Registro46037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
