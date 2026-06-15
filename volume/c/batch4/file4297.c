// fichero 4297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4297;

Registro4297 crear_registro4297(int id) {
    Registro4297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
