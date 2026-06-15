// fichero 6297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6297;

Registro6297 crear_registro6297(int id) {
    Registro6297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
