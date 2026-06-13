// fichero 24645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24645;

Registro24645 crear_registro24645(int id) {
    Registro24645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24645(Registro24645 r) {
    return r.valor + r.id;
}
