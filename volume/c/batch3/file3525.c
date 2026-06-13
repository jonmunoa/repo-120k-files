// fichero 3525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3525;

Registro3525 crear_registro3525(int id) {
    Registro3525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3525(Registro3525 r) {
    return r.valor + r.id;
}
