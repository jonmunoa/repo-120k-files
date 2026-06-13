// fichero 30685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30685;

Registro30685 crear_registro30685(int id) {
    Registro30685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30685(Registro30685 r) {
    return r.valor + r.id;
}
