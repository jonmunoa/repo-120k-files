// fichero 11281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11281;

Registro11281 crear_registro11281(int id) {
    Registro11281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11281(Registro11281 r) {
    return r.valor + r.id;
}
