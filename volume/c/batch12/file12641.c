// fichero 12641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12641;

Registro12641 crear_registro12641(int id) {
    Registro12641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12641(Registro12641 r) {
    return r.valor + r.id;
}
