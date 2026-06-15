// fichero 18385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18385;

Registro18385 crear_registro18385(int id) {
    Registro18385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
