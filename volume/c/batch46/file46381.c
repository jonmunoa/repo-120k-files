// fichero 46381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46381;

Registro46381 crear_registro46381(int id) {
    Registro46381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
