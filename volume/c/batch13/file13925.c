// fichero 13925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13925;

Registro13925 crear_registro13925(int id) {
    Registro13925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
