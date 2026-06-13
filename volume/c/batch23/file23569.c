// fichero 23569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23569;

Registro23569 crear_registro23569(int id) {
    Registro23569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23569(Registro23569 r) {
    return r.valor + r.id;
}
