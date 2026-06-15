// fichero 43005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43005;

Registro43005 crear_registro43005(int id) {
    Registro43005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
