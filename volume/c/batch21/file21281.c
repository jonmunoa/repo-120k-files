// fichero 21281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21281;

Registro21281 crear_registro21281(int id) {
    Registro21281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21281(Registro21281 r) {
    return r.valor + r.id;
}
