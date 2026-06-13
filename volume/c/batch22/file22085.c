// fichero 22085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22085;

Registro22085 crear_registro22085(int id) {
    Registro22085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22085(Registro22085 r) {
    return r.valor + r.id;
}
