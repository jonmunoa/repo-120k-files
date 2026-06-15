// fichero 32329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32329;

Registro32329 crear_registro32329(int id) {
    Registro32329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
