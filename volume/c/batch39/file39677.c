// fichero 39677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39677;

Registro39677 crear_registro39677(int id) {
    Registro39677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39677(Registro39677 r) {
    return r.valor + r.id;
}
