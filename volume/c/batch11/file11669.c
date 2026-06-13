// fichero 11669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11669;

Registro11669 crear_registro11669(int id) {
    Registro11669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11669(Registro11669 r) {
    return r.valor + r.id;
}
