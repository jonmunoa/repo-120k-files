// fichero 18269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18269;

Registro18269 crear_registro18269(int id) {
    Registro18269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
