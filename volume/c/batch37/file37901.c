// fichero 37901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37901;

Registro37901 crear_registro37901(int id) {
    Registro37901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37901(Registro37901 r) {
    return r.valor + r.id;
}
