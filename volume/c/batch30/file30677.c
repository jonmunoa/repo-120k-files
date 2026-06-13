// fichero 30677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30677;

Registro30677 crear_registro30677(int id) {
    Registro30677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30677(Registro30677 r) {
    return r.valor + r.id;
}
