// fichero 6825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6825;

Registro6825 crear_registro6825(int id) {
    Registro6825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6825(Registro6825 r) {
    return r.valor + r.id;
}
