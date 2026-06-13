// fichero 2689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2689;

Registro2689 crear_registro2689(int id) {
    Registro2689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2689(Registro2689 r) {
    return r.valor + r.id;
}
