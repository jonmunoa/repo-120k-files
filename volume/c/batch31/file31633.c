// fichero 31633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31633;

Registro31633 crear_registro31633(int id) {
    Registro31633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
