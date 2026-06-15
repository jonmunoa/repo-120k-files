// fichero 43357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43357;

Registro43357 crear_registro43357(int id) {
    Registro43357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
