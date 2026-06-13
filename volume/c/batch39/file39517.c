// fichero 39517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39517;

Registro39517 crear_registro39517(int id) {
    Registro39517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39517(Registro39517 r) {
    return r.valor + r.id;
}
