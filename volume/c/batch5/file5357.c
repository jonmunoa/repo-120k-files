// fichero 5357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5357;

Registro5357 crear_registro5357(int id) {
    Registro5357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5357(Registro5357 r) {
    return r.valor + r.id;
}
