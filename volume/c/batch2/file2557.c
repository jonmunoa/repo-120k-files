// fichero 2557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2557;

Registro2557 crear_registro2557(int id) {
    Registro2557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2557(Registro2557 r) {
    return r.valor + r.id;
}
