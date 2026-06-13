// fichero 22805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22805;

Registro22805 crear_registro22805(int id) {
    Registro22805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22805(Registro22805 r) {
    return r.valor + r.id;
}
