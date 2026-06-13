// fichero 2861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2861;

Registro2861 crear_registro2861(int id) {
    Registro2861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2861(Registro2861 r) {
    return r.valor + r.id;
}
