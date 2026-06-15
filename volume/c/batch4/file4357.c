// fichero 4357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4357;

Registro4357 crear_registro4357(int id) {
    Registro4357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
