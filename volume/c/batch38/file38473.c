// fichero 38473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38473;

Registro38473 crear_registro38473(int id) {
    Registro38473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
