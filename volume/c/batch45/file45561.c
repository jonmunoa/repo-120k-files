// fichero 45561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45561;

Registro45561 crear_registro45561(int id) {
    Registro45561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
