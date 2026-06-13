// fichero 39845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39845;

Registro39845 crear_registro39845(int id) {
    Registro39845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39845(Registro39845 r) {
    return r.valor + r.id;
}
