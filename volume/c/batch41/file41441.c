// fichero 41441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41441;

Registro41441 crear_registro41441(int id) {
    Registro41441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41441(Registro41441 r) {
    return r.valor + r.id;
}
