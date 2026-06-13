// fichero 17825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17825;

Registro17825 crear_registro17825(int id) {
    Registro17825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17825(Registro17825 r) {
    return r.valor + r.id;
}
