// fichero 6925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6925;

Registro6925 crear_registro6925(int id) {
    Registro6925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
