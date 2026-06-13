// fichero 2137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2137;

Registro2137 crear_registro2137(int id) {
    Registro2137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2137(Registro2137 r) {
    return r.valor + r.id;
}
