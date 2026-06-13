// fichero 39181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39181;

Registro39181 crear_registro39181(int id) {
    Registro39181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39181(Registro39181 r) {
    return r.valor + r.id;
}
