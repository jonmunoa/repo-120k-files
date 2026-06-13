// fichero 24277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24277;

Registro24277 crear_registro24277(int id) {
    Registro24277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24277(Registro24277 r) {
    return r.valor + r.id;
}
