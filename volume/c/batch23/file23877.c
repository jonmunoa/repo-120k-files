// fichero 23877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23877;

Registro23877 crear_registro23877(int id) {
    Registro23877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23877(Registro23877 r) {
    return r.valor + r.id;
}
