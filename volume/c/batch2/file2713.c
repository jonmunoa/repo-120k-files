// fichero 2713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2713;

Registro2713 crear_registro2713(int id) {
    Registro2713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2713(Registro2713 r) {
    return r.valor + r.id;
}
