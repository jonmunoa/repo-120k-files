// fichero 22761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22761;

Registro22761 crear_registro22761(int id) {
    Registro22761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22761(Registro22761 r) {
    return r.valor + r.id;
}
