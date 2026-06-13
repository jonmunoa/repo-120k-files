// fichero 5049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5049;

Registro5049 crear_registro5049(int id) {
    Registro5049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5049(Registro5049 r) {
    return r.valor + r.id;
}
