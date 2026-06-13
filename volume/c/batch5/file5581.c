// fichero 5581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5581;

Registro5581 crear_registro5581(int id) {
    Registro5581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5581(Registro5581 r) {
    return r.valor + r.id;
}
