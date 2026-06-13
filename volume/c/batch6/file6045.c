// fichero 6045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6045;

Registro6045 crear_registro6045(int id) {
    Registro6045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6045(Registro6045 r) {
    return r.valor + r.id;
}
