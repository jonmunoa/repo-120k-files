// fichero 54817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54817;

Registro54817 crear_registro54817(int id) {
    Registro54817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54817(Registro54817 r) {
    return r.valor + r.id;
}
