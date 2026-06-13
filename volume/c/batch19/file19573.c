// fichero 19573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19573;

Registro19573 crear_registro19573(int id) {
    Registro19573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19573(Registro19573 r) {
    return r.valor + r.id;
}
