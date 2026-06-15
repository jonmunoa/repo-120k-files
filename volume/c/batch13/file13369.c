// fichero 13369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13369;

Registro13369 crear_registro13369(int id) {
    Registro13369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
