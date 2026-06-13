// fichero 5069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5069;

Registro5069 crear_registro5069(int id) {
    Registro5069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5069(Registro5069 r) {
    return r.valor + r.id;
}
