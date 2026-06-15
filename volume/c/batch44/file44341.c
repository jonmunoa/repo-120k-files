// fichero 44341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44341;

Registro44341 crear_registro44341(int id) {
    Registro44341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
