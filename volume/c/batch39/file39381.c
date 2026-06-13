// fichero 39381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39381;

Registro39381 crear_registro39381(int id) {
    Registro39381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39381(Registro39381 r) {
    return r.valor + r.id;
}
