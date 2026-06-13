// fichero 23793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23793;

Registro23793 crear_registro23793(int id) {
    Registro23793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23793(Registro23793 r) {
    return r.valor + r.id;
}
