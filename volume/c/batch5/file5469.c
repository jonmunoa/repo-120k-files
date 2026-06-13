// fichero 5469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5469;

Registro5469 crear_registro5469(int id) {
    Registro5469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5469(Registro5469 r) {
    return r.valor + r.id;
}
