// fichero 23813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23813;

Registro23813 crear_registro23813(int id) {
    Registro23813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23813(Registro23813 r) {
    return r.valor + r.id;
}
