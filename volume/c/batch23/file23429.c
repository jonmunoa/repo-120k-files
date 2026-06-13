// fichero 23429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23429;

Registro23429 crear_registro23429(int id) {
    Registro23429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23429(Registro23429 r) {
    return r.valor + r.id;
}
