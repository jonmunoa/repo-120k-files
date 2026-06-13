// fichero 3861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3861;

Registro3861 crear_registro3861(int id) {
    Registro3861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3861(Registro3861 r) {
    return r.valor + r.id;
}
