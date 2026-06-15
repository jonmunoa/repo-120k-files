// fichero 13625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13625;

Registro13625 crear_registro13625(int id) {
    Registro13625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
