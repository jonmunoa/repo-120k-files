// fichero 30429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30429;

Registro30429 crear_registro30429(int id) {
    Registro30429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30429(Registro30429 r) {
    return r.valor + r.id;
}
