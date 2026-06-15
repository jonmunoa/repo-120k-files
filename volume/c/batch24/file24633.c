// fichero 24633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24633;

Registro24633 crear_registro24633(int id) {
    Registro24633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
