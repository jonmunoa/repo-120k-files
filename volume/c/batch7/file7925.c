// fichero 7925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7925;

Registro7925 crear_registro7925(int id) {
    Registro7925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
