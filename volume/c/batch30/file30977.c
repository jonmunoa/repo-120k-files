// fichero 30977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30977;

Registro30977 crear_registro30977(int id) {
    Registro30977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30977(Registro30977 r) {
    return r.valor + r.id;
}
