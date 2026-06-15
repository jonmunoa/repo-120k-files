// fichero 22925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22925;

Registro22925 crear_registro22925(int id) {
    Registro22925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
