// fichero 39297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39297;

Registro39297 crear_registro39297(int id) {
    Registro39297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39297(Registro39297 r) {
    return r.valor + r.id;
}
