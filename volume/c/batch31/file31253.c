// fichero 31253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31253;

Registro31253 crear_registro31253(int id) {
    Registro31253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
