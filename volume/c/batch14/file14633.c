// fichero 14633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14633;

Registro14633 crear_registro14633(int id) {
    Registro14633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
