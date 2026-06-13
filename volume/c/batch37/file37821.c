// fichero 37821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37821;

Registro37821 crear_registro37821(int id) {
    Registro37821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37821(Registro37821 r) {
    return r.valor + r.id;
}
