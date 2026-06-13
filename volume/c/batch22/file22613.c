// fichero 22613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22613;

Registro22613 crear_registro22613(int id) {
    Registro22613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22613(Registro22613 r) {
    return r.valor + r.id;
}
