// fichero 21633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21633;

Registro21633 crear_registro21633(int id) {
    Registro21633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
