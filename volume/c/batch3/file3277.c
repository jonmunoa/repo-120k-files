// fichero 3277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3277;

Registro3277 crear_registro3277(int id) {
    Registro3277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3277(Registro3277 r) {
    return r.valor + r.id;
}
