// fichero 46185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46185;

Registro46185 crear_registro46185(int id) {
    Registro46185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
