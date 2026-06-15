// fichero 15273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15273;

Registro15273 crear_registro15273(int id) {
    Registro15273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
