// fichero 46925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46925;

Registro46925 crear_registro46925(int id) {
    Registro46925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
