// fichero 30205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30205;

Registro30205 crear_registro30205(int id) {
    Registro30205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30205(Registro30205 r) {
    return r.valor + r.id;
}
