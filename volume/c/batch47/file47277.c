// fichero 47277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47277;

Registro47277 crear_registro47277(int id) {
    Registro47277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47277(Registro47277 r) {
    return r.valor + r.id;
}
