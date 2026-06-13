// fichero 23605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23605;

Registro23605 crear_registro23605(int id) {
    Registro23605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23605(Registro23605 r) {
    return r.valor + r.id;
}
