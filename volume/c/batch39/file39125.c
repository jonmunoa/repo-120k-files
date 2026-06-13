// fichero 39125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39125;

Registro39125 crear_registro39125(int id) {
    Registro39125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39125(Registro39125 r) {
    return r.valor + r.id;
}
