// fichero 15473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15473;

Registro15473 crear_registro15473(int id) {
    Registro15473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
