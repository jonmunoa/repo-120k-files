// fichero 6089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6089;

Registro6089 crear_registro6089(int id) {
    Registro6089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6089(Registro6089 r) {
    return r.valor + r.id;
}
