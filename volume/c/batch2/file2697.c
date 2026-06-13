// fichero 2697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2697;

Registro2697 crear_registro2697(int id) {
    Registro2697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2697(Registro2697 r) {
    return r.valor + r.id;
}
