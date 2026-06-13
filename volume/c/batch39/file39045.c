// fichero 39045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39045;

Registro39045 crear_registro39045(int id) {
    Registro39045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39045(Registro39045 r) {
    return r.valor + r.id;
}
