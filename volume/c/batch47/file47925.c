// fichero 47925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47925;

Registro47925 crear_registro47925(int id) {
    Registro47925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
