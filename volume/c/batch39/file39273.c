// fichero 39273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39273;

Registro39273 crear_registro39273(int id) {
    Registro39273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
