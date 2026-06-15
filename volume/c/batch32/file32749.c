// fichero 32749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32749;

Registro32749 crear_registro32749(int id) {
    Registro32749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
