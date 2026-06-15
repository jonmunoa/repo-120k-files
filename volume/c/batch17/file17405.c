// fichero 17405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17405;

Registro17405 crear_registro17405(int id) {
    Registro17405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
