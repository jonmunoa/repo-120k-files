// fichero 39501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39501;

Registro39501 crear_registro39501(int id) {
    Registro39501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39501(Registro39501 r) {
    return r.valor + r.id;
}
