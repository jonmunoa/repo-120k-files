// fichero 23933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23933;

Registro23933 crear_registro23933(int id) {
    Registro23933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23933(Registro23933 r) {
    return r.valor + r.id;
}
