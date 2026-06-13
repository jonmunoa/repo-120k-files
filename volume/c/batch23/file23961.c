// fichero 23961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23961;

Registro23961 crear_registro23961(int id) {
    Registro23961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23961(Registro23961 r) {
    return r.valor + r.id;
}
