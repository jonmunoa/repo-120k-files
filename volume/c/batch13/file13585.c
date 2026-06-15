// fichero 13585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13585;

Registro13585 crear_registro13585(int id) {
    Registro13585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
