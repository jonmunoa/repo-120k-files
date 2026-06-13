// fichero 21797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21797;

Registro21797 crear_registro21797(int id) {
    Registro21797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21797(Registro21797 r) {
    return r.valor + r.id;
}
