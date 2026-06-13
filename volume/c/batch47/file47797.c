// fichero 47797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47797;

Registro47797 crear_registro47797(int id) {
    Registro47797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47797(Registro47797 r) {
    return r.valor + r.id;
}
