// fichero 38281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38281;

Registro38281 crear_registro38281(int id) {
    Registro38281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38281(Registro38281 r) {
    return r.valor + r.id;
}
