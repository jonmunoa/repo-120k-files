// fichero 15429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15429;

Registro15429 crear_registro15429(int id) {
    Registro15429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15429(Registro15429 r) {
    return r.valor + r.id;
}
