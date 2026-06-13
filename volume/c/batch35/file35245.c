// fichero 35245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35245;

Registro35245 crear_registro35245(int id) {
    Registro35245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35245(Registro35245 r) {
    return r.valor + r.id;
}
