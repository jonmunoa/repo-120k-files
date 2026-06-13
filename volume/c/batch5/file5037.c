// fichero 5037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5037;

Registro5037 crear_registro5037(int id) {
    Registro5037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5037(Registro5037 r) {
    return r.valor + r.id;
}
