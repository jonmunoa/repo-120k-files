// fichero 17341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17341;

Registro17341 crear_registro17341(int id) {
    Registro17341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
