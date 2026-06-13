// fichero 5429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5429;

Registro5429 crear_registro5429(int id) {
    Registro5429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5429(Registro5429 r) {
    return r.valor + r.id;
}
