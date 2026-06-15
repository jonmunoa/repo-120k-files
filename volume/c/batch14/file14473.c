// fichero 14473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14473;

Registro14473 crear_registro14473(int id) {
    Registro14473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
