// fichero 45825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45825;

Registro45825 crear_registro45825(int id) {
    Registro45825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
