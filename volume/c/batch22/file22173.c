// fichero 22173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22173;

Registro22173 crear_registro22173(int id) {
    Registro22173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22173(Registro22173 r) {
    return r.valor + r.id;
}
