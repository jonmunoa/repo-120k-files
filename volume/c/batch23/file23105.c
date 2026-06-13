// fichero 23105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23105;

Registro23105 crear_registro23105(int id) {
    Registro23105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23105(Registro23105 r) {
    return r.valor + r.id;
}
