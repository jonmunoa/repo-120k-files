// fichero 2865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2865;

Registro2865 crear_registro2865(int id) {
    Registro2865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2865(Registro2865 r) {
    return r.valor + r.id;
}
