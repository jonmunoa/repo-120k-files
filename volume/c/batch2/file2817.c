// fichero 2817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2817;

Registro2817 crear_registro2817(int id) {
    Registro2817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2817(Registro2817 r) {
    return r.valor + r.id;
}
