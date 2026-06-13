// fichero 39413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39413;

Registro39413 crear_registro39413(int id) {
    Registro39413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39413(Registro39413 r) {
    return r.valor + r.id;
}
