// fichero 2961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2961;

Registro2961 crear_registro2961(int id) {
    Registro2961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2961(Registro2961 r) {
    return r.valor + r.id;
}
