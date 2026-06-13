// fichero 1445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1445;

Registro1445 crear_registro1445(int id) {
    Registro1445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1445(Registro1445 r) {
    return r.valor + r.id;
}
