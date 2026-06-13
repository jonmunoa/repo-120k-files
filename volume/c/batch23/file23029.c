// fichero 23029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23029;

Registro23029 crear_registro23029(int id) {
    Registro23029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23029(Registro23029 r) {
    return r.valor + r.id;
}
