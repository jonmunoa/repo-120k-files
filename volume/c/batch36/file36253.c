// fichero 36253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36253;

Registro36253 crear_registro36253(int id) {
    Registro36253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36253(Registro36253 r) {
    return r.valor + r.id;
}
