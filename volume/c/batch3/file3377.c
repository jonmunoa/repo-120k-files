// fichero 3377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3377;

Registro3377 crear_registro3377(int id) {
    Registro3377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3377(Registro3377 r) {
    return r.valor + r.id;
}
