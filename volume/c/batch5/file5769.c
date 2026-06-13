// fichero 5769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5769;

Registro5769 crear_registro5769(int id) {
    Registro5769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5769(Registro5769 r) {
    return r.valor + r.id;
}
