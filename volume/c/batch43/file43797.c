// fichero 43797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43797;

Registro43797 crear_registro43797(int id) {
    Registro43797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43797(Registro43797 r) {
    return r.valor + r.id;
}
