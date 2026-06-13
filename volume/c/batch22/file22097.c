// fichero 22097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22097;

Registro22097 crear_registro22097(int id) {
    Registro22097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22097(Registro22097 r) {
    return r.valor + r.id;
}
