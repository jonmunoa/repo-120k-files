// fichero 4885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4885;

Registro4885 crear_registro4885(int id) {
    Registro4885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4885(Registro4885 r) {
    return r.valor + r.id;
}
