// fichero 50441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50441;

Registro50441 crear_registro50441(int id) {
    Registro50441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50441(Registro50441 r) {
    return r.valor + r.id;
}
