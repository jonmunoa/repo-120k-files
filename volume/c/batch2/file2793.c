// fichero 2793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2793;

Registro2793 crear_registro2793(int id) {
    Registro2793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2793(Registro2793 r) {
    return r.valor + r.id;
}
