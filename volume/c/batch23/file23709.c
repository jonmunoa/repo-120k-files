// fichero 23709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23709;

Registro23709 crear_registro23709(int id) {
    Registro23709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23709(Registro23709 r) {
    return r.valor + r.id;
}
