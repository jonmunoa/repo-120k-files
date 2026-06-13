// fichero 54841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54841;

Registro54841 crear_registro54841(int id) {
    Registro54841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54841(Registro54841 r) {
    return r.valor + r.id;
}
