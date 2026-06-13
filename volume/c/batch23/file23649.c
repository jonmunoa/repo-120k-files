// fichero 23649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23649;

Registro23649 crear_registro23649(int id) {
    Registro23649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23649(Registro23649 r) {
    return r.valor + r.id;
}
