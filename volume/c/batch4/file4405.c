// fichero 4405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4405;

Registro4405 crear_registro4405(int id) {
    Registro4405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
