// fichero 5845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5845;

Registro5845 crear_registro5845(int id) {
    Registro5845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5845(Registro5845 r) {
    return r.valor + r.id;
}
