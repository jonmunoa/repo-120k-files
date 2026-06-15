// fichero 48925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48925;

Registro48925 crear_registro48925(int id) {
    Registro48925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
