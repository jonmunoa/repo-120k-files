// fichero 39625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39625;

Registro39625 crear_registro39625(int id) {
    Registro39625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39625(Registro39625 r) {
    return r.valor + r.id;
}
