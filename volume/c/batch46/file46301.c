// fichero 46301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46301;

Registro46301 crear_registro46301(int id) {
    Registro46301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
