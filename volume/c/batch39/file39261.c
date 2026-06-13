// fichero 39261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39261;

Registro39261 crear_registro39261(int id) {
    Registro39261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39261(Registro39261 r) {
    return r.valor + r.id;
}
