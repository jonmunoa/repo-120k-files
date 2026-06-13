// fichero 54197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54197;

Registro54197 crear_registro54197(int id) {
    Registro54197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54197(Registro54197 r) {
    return r.valor + r.id;
}
