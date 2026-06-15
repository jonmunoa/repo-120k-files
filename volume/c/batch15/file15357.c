// fichero 15357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15357;

Registro15357 crear_registro15357(int id) {
    Registro15357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
