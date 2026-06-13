// fichero 30261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30261;

Registro30261 crear_registro30261(int id) {
    Registro30261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30261(Registro30261 r) {
    return r.valor + r.id;
}
