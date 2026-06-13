// fichero 22293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22293;

Registro22293 crear_registro22293(int id) {
    Registro22293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22293(Registro22293 r) {
    return r.valor + r.id;
}
