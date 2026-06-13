// fichero 36045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36045;

Registro36045 crear_registro36045(int id) {
    Registro36045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36045(Registro36045 r) {
    return r.valor + r.id;
}
