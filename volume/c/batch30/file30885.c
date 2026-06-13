// fichero 30885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30885;

Registro30885 crear_registro30885(int id) {
    Registro30885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30885(Registro30885 r) {
    return r.valor + r.id;
}
