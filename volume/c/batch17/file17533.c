// fichero 17533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17533;

Registro17533 crear_registro17533(int id) {
    Registro17533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17533(Registro17533 r) {
    return r.valor + r.id;
}
