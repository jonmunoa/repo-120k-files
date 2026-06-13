// fichero 5017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5017;

Registro5017 crear_registro5017(int id) {
    Registro5017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5017(Registro5017 r) {
    return r.valor + r.id;
}
