// fichero 5 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5;

Registro5 crear_registro5(int id) {
    Registro5 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5(Registro5 r) {
    return r.valor + r.id;
}
