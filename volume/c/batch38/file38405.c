// fichero 38405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38405;

Registro38405 crear_registro38405(int id) {
    Registro38405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
