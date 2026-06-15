// fichero 42357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42357;

Registro42357 crear_registro42357(int id) {
    Registro42357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
