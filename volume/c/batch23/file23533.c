// fichero 23533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23533;

Registro23533 crear_registro23533(int id) {
    Registro23533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23533(Registro23533 r) {
    return r.valor + r.id;
}
