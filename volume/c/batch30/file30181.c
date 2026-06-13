// fichero 30181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30181;

Registro30181 crear_registro30181(int id) {
    Registro30181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30181(Registro30181 r) {
    return r.valor + r.id;
}
