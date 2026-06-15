// fichero 38477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38477;

Registro38477 crear_registro38477(int id) {
    Registro38477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
