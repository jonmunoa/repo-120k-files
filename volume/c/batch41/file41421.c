// fichero 41421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41421;

Registro41421 crear_registro41421(int id) {
    Registro41421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41421(Registro41421 r) {
    return r.valor + r.id;
}
