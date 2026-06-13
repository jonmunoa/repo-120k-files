// fichero 1073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1073;

Registro1073 crear_registro1073(int id) {
    Registro1073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1073(Registro1073 r) {
    return r.valor + r.id;
}
