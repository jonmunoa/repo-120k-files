// fichero 18389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18389;

Registro18389 crear_registro18389(int id) {
    Registro18389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18389(Registro18389 r) {
    return r.valor + r.id;
}
