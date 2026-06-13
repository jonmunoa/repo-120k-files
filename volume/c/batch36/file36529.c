// fichero 36529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36529;

Registro36529 crear_registro36529(int id) {
    Registro36529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36529(Registro36529 r) {
    return r.valor + r.id;
}
