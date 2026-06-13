// fichero 30901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30901;

Registro30901 crear_registro30901(int id) {
    Registro30901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30901(Registro30901 r) {
    return r.valor + r.id;
}
