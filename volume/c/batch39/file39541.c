// fichero 39541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39541;

Registro39541 crear_registro39541(int id) {
    Registro39541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39541(Registro39541 r) {
    return r.valor + r.id;
}
