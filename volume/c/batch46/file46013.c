// fichero 46013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46013;

Registro46013 crear_registro46013(int id) {
    Registro46013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
