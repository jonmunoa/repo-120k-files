// fichero 6633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6633;

Registro6633 crear_registro6633(int id) {
    Registro6633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
