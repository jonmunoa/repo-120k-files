// fichero 30741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30741;

Registro30741 crear_registro30741(int id) {
    Registro30741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30741(Registro30741 r) {
    return r.valor + r.id;
}
