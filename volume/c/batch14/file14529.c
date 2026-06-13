// fichero 14529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14529;

Registro14529 crear_registro14529(int id) {
    Registro14529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14529(Registro14529 r) {
    return r.valor + r.id;
}
