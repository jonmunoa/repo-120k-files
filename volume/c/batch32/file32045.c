// fichero 32045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32045;

Registro32045 crear_registro32045(int id) {
    Registro32045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32045(Registro32045 r) {
    return r.valor + r.id;
}
