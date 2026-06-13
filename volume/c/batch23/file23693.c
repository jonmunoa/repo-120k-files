// fichero 23693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23693;

Registro23693 crear_registro23693(int id) {
    Registro23693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23693(Registro23693 r) {
    return r.valor + r.id;
}
