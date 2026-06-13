// fichero 22065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22065;

Registro22065 crear_registro22065(int id) {
    Registro22065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22065(Registro22065 r) {
    return r.valor + r.id;
}
