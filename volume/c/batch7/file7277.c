// fichero 7277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7277;

Registro7277 crear_registro7277(int id) {
    Registro7277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7277(Registro7277 r) {
    return r.valor + r.id;
}
