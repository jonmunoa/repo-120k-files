// fichero 32925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32925;

Registro32925 crear_registro32925(int id) {
    Registro32925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
