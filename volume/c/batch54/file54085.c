// fichero 54085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54085;

Registro54085 crear_registro54085(int id) {
    Registro54085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54085(Registro54085 r) {
    return r.valor + r.id;
}
