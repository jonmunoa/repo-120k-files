// fichero 29277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29277;

Registro29277 crear_registro29277(int id) {
    Registro29277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29277(Registro29277 r) {
    return r.valor + r.id;
}
