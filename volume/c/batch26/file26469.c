// fichero 26469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26469;

Registro26469 crear_registro26469(int id) {
    Registro26469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26469(Registro26469 r) {
    return r.valor + r.id;
}
