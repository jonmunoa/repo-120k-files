// fichero 45593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45593;

Registro45593 crear_registro45593(int id) {
    Registro45593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
