// fichero 6797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6797;

Registro6797 crear_registro6797(int id) {
    Registro6797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6797(Registro6797 r) {
    return r.valor + r.id;
}
