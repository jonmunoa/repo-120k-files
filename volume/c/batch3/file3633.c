// fichero 3633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3633;

Registro3633 crear_registro3633(int id) {
    Registro3633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
