// fichero 2649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2649;

Registro2649 crear_registro2649(int id) {
    Registro2649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2649(Registro2649 r) {
    return r.valor + r.id;
}
