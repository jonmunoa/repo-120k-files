// fichero 32273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32273;

Registro32273 crear_registro32273(int id) {
    Registro32273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
