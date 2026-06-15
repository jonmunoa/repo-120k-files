// fichero 2633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2633;

Registro2633 crear_registro2633(int id) {
    Registro2633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
