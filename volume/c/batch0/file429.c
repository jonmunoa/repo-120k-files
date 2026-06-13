// fichero 429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro429;

Registro429 crear_registro429(int id) {
    Registro429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro429(Registro429 r) {
    return r.valor + r.id;
}
