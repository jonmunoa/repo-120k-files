// fichero 30633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30633;

Registro30633 crear_registro30633(int id) {
    Registro30633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
