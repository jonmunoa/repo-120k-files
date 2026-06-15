// fichero 46157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46157;

Registro46157 crear_registro46157(int id) {
    Registro46157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
