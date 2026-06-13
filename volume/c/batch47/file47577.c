// fichero 47577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47577;

Registro47577 crear_registro47577(int id) {
    Registro47577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47577(Registro47577 r) {
    return r.valor + r.id;
}
