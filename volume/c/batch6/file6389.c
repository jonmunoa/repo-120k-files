// fichero 6389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6389;

Registro6389 crear_registro6389(int id) {
    Registro6389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6389(Registro6389 r) {
    return r.valor + r.id;
}
