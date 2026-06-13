// fichero 15629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15629;

Registro15629 crear_registro15629(int id) {
    Registro15629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15629(Registro15629 r) {
    return r.valor + r.id;
}
