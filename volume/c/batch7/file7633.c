// fichero 7633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7633;

Registro7633 crear_registro7633(int id) {
    Registro7633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
