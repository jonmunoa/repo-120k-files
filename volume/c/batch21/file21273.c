// fichero 21273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21273;

Registro21273 crear_registro21273(int id) {
    Registro21273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
