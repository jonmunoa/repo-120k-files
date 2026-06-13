// fichero 3281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3281;

Registro3281 crear_registro3281(int id) {
    Registro3281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3281(Registro3281 r) {
    return r.valor + r.id;
}
