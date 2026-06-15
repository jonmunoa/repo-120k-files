// fichero 16925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16925;

Registro16925 crear_registro16925(int id) {
    Registro16925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
