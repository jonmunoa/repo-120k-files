// fichero 36633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36633;

Registro36633 crear_registro36633(int id) {
    Registro36633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
