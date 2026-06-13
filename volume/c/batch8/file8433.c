// fichero 8433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8433;

Registro8433 crear_registro8433(int id) {
    Registro8433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8433(Registro8433 r) {
    return r.valor + r.id;
}
