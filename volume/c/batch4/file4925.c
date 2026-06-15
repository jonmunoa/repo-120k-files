// fichero 4925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4925;

Registro4925 crear_registro4925(int id) {
    Registro4925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
