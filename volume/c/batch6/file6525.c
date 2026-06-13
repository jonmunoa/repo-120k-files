// fichero 6525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6525;

Registro6525 crear_registro6525(int id) {
    Registro6525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6525(Registro6525 r) {
    return r.valor + r.id;
}
