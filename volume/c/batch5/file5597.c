// fichero 5597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5597;

Registro5597 crear_registro5597(int id) {
    Registro5597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5597(Registro5597 r) {
    return r.valor + r.id;
}
