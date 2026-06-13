// fichero 36825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36825;

Registro36825 crear_registro36825(int id) {
    Registro36825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36825(Registro36825 r) {
    return r.valor + r.id;
}
