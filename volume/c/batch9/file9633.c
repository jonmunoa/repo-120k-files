// fichero 9633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9633;

Registro9633 crear_registro9633(int id) {
    Registro9633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9633(Registro9633 r) {
    return r.valor + r.id;
}
