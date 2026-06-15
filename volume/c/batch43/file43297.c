// fichero 43297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43297;

Registro43297 crear_registro43297(int id) {
    Registro43297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
