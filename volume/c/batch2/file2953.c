// fichero 2953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2953;

Registro2953 crear_registro2953(int id) {
    Registro2953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2953(Registro2953 r) {
    return r.valor + r.id;
}
