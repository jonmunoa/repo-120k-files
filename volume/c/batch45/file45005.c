// fichero 45005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45005;

Registro45005 crear_registro45005(int id) {
    Registro45005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
