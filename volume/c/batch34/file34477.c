// fichero 34477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34477;

Registro34477 crear_registro34477(int id) {
    Registro34477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34477(Registro34477 r) {
    return r.valor + r.id;
}
