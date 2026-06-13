// fichero 21677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21677;

Registro21677 crear_registro21677(int id) {
    Registro21677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21677(Registro21677 r) {
    return r.valor + r.id;
}
