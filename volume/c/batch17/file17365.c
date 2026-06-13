// fichero 17365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17365;

Registro17365 crear_registro17365(int id) {
    Registro17365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17365(Registro17365 r) {
    return r.valor + r.id;
}
