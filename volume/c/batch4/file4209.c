// fichero 4209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4209;

Registro4209 crear_registro4209(int id) {
    Registro4209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
