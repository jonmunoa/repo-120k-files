// fichero 23529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23529;

Registro23529 crear_registro23529(int id) {
    Registro23529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23529(Registro23529 r) {
    return r.valor + r.id;
}
