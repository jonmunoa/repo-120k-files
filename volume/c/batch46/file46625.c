// fichero 46625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46625;

Registro46625 crear_registro46625(int id) {
    Registro46625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
