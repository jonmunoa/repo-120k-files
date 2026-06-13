// fichero 16389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16389;

Registro16389 crear_registro16389(int id) {
    Registro16389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16389(Registro16389 r) {
    return r.valor + r.id;
}
