// fichero 2957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2957;

Registro2957 crear_registro2957(int id) {
    Registro2957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2957(Registro2957 r) {
    return r.valor + r.id;
}
