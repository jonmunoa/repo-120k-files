// fichero 2733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2733;

Registro2733 crear_registro2733(int id) {
    Registro2733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2733(Registro2733 r) {
    return r.valor + r.id;
}
