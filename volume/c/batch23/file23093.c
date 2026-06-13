// fichero 23093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23093;

Registro23093 crear_registro23093(int id) {
    Registro23093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23093(Registro23093 r) {
    return r.valor + r.id;
}
