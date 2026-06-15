// fichero 33925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33925;

Registro33925 crear_registro33925(int id) {
    Registro33925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
