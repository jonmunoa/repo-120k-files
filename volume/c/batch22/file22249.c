// fichero 22249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22249;

Registro22249 crear_registro22249(int id) {
    Registro22249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22249(Registro22249 r) {
    return r.valor + r.id;
}
