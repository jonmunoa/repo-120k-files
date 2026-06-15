// fichero 35633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35633;

Registro35633 crear_registro35633(int id) {
    Registro35633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
