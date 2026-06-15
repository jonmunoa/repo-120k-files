// fichero 43273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43273;

Registro43273 crear_registro43273(int id) {
    Registro43273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
