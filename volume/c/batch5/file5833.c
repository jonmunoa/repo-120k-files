// fichero 5833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5833;

Registro5833 crear_registro5833(int id) {
    Registro5833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5833(Registro5833 r) {
    return r.valor + r.id;
}
