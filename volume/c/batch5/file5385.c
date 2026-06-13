// fichero 5385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5385;

Registro5385 crear_registro5385(int id) {
    Registro5385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5385(Registro5385 r) {
    return r.valor + r.id;
}
