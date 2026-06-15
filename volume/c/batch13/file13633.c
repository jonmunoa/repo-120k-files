// fichero 13633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13633;

Registro13633 crear_registro13633(int id) {
    Registro13633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
