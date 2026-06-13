// fichero 53045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53045;

Registro53045 crear_registro53045(int id) {
    Registro53045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53045(Registro53045 r) {
    return r.valor + r.id;
}
