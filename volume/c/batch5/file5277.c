// fichero 5277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5277;

Registro5277 crear_registro5277(int id) {
    Registro5277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5277(Registro5277 r) {
    return r.valor + r.id;
}
