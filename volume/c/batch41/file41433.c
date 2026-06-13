// fichero 41433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41433;

Registro41433 crear_registro41433(int id) {
    Registro41433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41433(Registro41433 r) {
    return r.valor + r.id;
}
