// fichero 45625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45625;

Registro45625 crear_registro45625(int id) {
    Registro45625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
