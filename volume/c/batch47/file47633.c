// fichero 47633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47633;

Registro47633 crear_registro47633(int id) {
    Registro47633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
