// fichero 12045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12045;

Registro12045 crear_registro12045(int id) {
    Registro12045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12045(Registro12045 r) {
    return r.valor + r.id;
}
