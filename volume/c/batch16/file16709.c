// fichero 16709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16709;

Registro16709 crear_registro16709(int id) {
    Registro16709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
