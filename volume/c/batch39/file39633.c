// fichero 39633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39633;

Registro39633 crear_registro39633(int id) {
    Registro39633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
