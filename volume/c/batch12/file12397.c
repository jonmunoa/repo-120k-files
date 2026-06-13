// fichero 12397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12397;

Registro12397 crear_registro12397(int id) {
    Registro12397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12397(Registro12397 r) {
    return r.valor + r.id;
}
