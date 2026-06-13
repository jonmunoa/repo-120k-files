// fichero 22845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22845;

Registro22845 crear_registro22845(int id) {
    Registro22845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22845(Registro22845 r) {
    return r.valor + r.id;
}
