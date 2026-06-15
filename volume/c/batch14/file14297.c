// fichero 14297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14297;

Registro14297 crear_registro14297(int id) {
    Registro14297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
