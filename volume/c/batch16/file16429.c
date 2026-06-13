// fichero 16429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16429;

Registro16429 crear_registro16429(int id) {
    Registro16429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16429(Registro16429 r) {
    return r.valor + r.id;
}
