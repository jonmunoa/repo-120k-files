// fichero 44541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44541;

Registro44541 crear_registro44541(int id) {
    Registro44541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44541(Registro44541 r) {
    return r.valor + r.id;
}
