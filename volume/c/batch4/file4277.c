// fichero 4277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4277;

Registro4277 crear_registro4277(int id) {
    Registro4277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4277(Registro4277 r) {
    return r.valor + r.id;
}
