// fichero 7045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7045;

Registro7045 crear_registro7045(int id) {
    Registro7045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7045(Registro7045 r) {
    return r.valor + r.id;
}
