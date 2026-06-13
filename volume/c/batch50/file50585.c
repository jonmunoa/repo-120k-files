// fichero 50585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50585;

Registro50585 crear_registro50585(int id) {
    Registro50585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50585(Registro50585 r) {
    return r.valor + r.id;
}
