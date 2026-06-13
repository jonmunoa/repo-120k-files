// fichero 5677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5677;

Registro5677 crear_registro5677(int id) {
    Registro5677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5677(Registro5677 r) {
    return r.valor + r.id;
}
