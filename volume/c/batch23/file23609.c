// fichero 23609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23609;

Registro23609 crear_registro23609(int id) {
    Registro23609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23609(Registro23609 r) {
    return r.valor + r.id;
}
