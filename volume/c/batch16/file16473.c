// fichero 16473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16473;

Registro16473 crear_registro16473(int id) {
    Registro16473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
