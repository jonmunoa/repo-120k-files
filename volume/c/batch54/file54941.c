// fichero 54941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54941;

Registro54941 crear_registro54941(int id) {
    Registro54941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54941(Registro54941 r) {
    return r.valor + r.id;
}
