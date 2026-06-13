// fichero 5829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5829;

Registro5829 crear_registro5829(int id) {
    Registro5829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5829(Registro5829 r) {
    return r.valor + r.id;
}
