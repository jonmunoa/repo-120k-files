// fichero 23665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23665;

Registro23665 crear_registro23665(int id) {
    Registro23665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23665(Registro23665 r) {
    return r.valor + r.id;
}
