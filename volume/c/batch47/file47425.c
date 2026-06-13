// fichero 47425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47425;

Registro47425 crear_registro47425(int id) {
    Registro47425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47425(Registro47425 r) {
    return r.valor + r.id;
}
