// fichero 6741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6741;

Registro6741 crear_registro6741(int id) {
    Registro6741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6741(Registro6741 r) {
    return r.valor + r.id;
}
