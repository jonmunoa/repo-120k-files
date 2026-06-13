// fichero 34265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34265;

Registro34265 crear_registro34265(int id) {
    Registro34265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34265(Registro34265 r) {
    return r.valor + r.id;
}
