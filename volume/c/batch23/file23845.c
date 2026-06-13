// fichero 23845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23845;

Registro23845 crear_registro23845(int id) {
    Registro23845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23845(Registro23845 r) {
    return r.valor + r.id;
}
