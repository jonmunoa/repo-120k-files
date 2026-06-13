// fichero 39525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39525;

Registro39525 crear_registro39525(int id) {
    Registro39525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39525(Registro39525 r) {
    return r.valor + r.id;
}
