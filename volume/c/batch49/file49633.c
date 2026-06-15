// fichero 49633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49633;

Registro49633 crear_registro49633(int id) {
    Registro49633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
