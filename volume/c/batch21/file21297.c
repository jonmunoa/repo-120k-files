// fichero 21297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21297;

Registro21297 crear_registro21297(int id) {
    Registro21297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
