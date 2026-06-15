// fichero 27473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27473;

Registro27473 crear_registro27473(int id) {
    Registro27473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
