// fichero 36797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36797;

Registro36797 crear_registro36797(int id) {
    Registro36797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36797(Registro36797 r) {
    return r.valor + r.id;
}
