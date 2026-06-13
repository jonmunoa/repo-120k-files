// fichero 39717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39717;

Registro39717 crear_registro39717(int id) {
    Registro39717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39717(Registro39717 r) {
    return r.valor + r.id;
}
