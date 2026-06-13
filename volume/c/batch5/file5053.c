// fichero 5053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5053;

Registro5053 crear_registro5053(int id) {
    Registro5053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5053(Registro5053 r) {
    return r.valor + r.id;
}
