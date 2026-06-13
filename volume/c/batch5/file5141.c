// fichero 5141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5141;

Registro5141 crear_registro5141(int id) {
    Registro5141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5141(Registro5141 r) {
    return r.valor + r.id;
}
