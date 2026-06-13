// fichero 5797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5797;

Registro5797 crear_registro5797(int id) {
    Registro5797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5797(Registro5797 r) {
    return r.valor + r.id;
}
