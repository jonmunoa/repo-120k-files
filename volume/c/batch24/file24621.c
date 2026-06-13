// fichero 24621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24621;

Registro24621 crear_registro24621(int id) {
    Registro24621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24621(Registro24621 r) {
    return r.valor + r.id;
}
