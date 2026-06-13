// fichero 10541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10541;

Registro10541 crear_registro10541(int id) {
    Registro10541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10541(Registro10541 r) {
    return r.valor + r.id;
}
