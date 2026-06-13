// fichero 30365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30365;

Registro30365 crear_registro30365(int id) {
    Registro30365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30365(Registro30365 r) {
    return r.valor + r.id;
}
