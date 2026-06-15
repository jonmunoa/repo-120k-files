// fichero 46397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46397;

Registro46397 crear_registro46397(int id) {
    Registro46397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
