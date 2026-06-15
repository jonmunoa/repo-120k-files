// fichero 42633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42633;

Registro42633 crear_registro42633(int id) {
    Registro42633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
