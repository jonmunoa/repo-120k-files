// fichero 38677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38677;

Registro38677 crear_registro38677(int id) {
    Registro38677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38677(Registro38677 r) {
    return r.valor + r.id;
}
