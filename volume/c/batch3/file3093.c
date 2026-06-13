// fichero 3093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3093;

Registro3093 crear_registro3093(int id) {
    Registro3093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3093(Registro3093 r) {
    return r.valor + r.id;
}
