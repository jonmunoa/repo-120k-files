// fichero 46357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46357;

Registro46357 crear_registro46357(int id) {
    Registro46357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
