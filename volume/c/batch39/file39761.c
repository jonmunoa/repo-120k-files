// fichero 39761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39761;

Registro39761 crear_registro39761(int id) {
    Registro39761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39761(Registro39761 r) {
    return r.valor + r.id;
}
