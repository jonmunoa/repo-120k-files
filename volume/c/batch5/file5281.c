// fichero 5281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5281;

Registro5281 crear_registro5281(int id) {
    Registro5281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5281(Registro5281 r) {
    return r.valor + r.id;
}
