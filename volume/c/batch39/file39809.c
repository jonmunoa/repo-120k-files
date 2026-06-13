// fichero 39809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39809;

Registro39809 crear_registro39809(int id) {
    Registro39809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39809(Registro39809 r) {
    return r.valor + r.id;
}
