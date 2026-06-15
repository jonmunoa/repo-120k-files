// fichero 46825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46825;

Registro46825 crear_registro46825(int id) {
    Registro46825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
