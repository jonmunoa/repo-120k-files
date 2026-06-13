// fichero 47341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47341;

Registro47341 crear_registro47341(int id) {
    Registro47341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47341(Registro47341 r) {
    return r.valor + r.id;
}
