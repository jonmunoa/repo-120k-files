// fichero 52541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52541;

Registro52541 crear_registro52541(int id) {
    Registro52541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52541(Registro52541 r) {
    return r.valor + r.id;
}
