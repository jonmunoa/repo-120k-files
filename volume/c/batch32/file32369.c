// fichero 32369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32369;

Registro32369 crear_registro32369(int id) {
    Registro32369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
