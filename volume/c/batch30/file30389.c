// fichero 30389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30389;

Registro30389 crear_registro30389(int id) {
    Registro30389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30389(Registro30389 r) {
    return r.valor + r.id;
}
