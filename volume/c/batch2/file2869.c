// fichero 2869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2869;

Registro2869 crear_registro2869(int id) {
    Registro2869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2869(Registro2869 r) {
    return r.valor + r.id;
}
