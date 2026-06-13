// fichero 39165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39165;

Registro39165 crear_registro39165(int id) {
    Registro39165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39165(Registro39165 r) {
    return r.valor + r.id;
}
