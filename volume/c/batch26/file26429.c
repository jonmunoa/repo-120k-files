// fichero 26429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26429;

Registro26429 crear_registro26429(int id) {
    Registro26429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26429(Registro26429 r) {
    return r.valor + r.id;
}
