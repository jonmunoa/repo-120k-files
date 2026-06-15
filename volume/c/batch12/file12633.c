// fichero 12633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12633;

Registro12633 crear_registro12633(int id) {
    Registro12633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
