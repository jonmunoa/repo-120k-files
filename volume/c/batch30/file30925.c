// fichero 30925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30925;

Registro30925 crear_registro30925(int id) {
    Registro30925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
