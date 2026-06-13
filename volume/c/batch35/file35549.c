// fichero 35549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35549;

Registro35549 crear_registro35549(int id) {
    Registro35549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35549(Registro35549 r) {
    return r.valor + r.id;
}
