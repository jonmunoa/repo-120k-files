// fichero 45429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45429;

Registro45429 crear_registro45429(int id) {
    Registro45429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45429(Registro45429 r) {
    return r.valor + r.id;
}
