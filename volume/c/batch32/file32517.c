// fichero 32517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32517;

Registro32517 crear_registro32517(int id) {
    Registro32517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
