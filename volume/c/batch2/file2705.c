// fichero 2705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2705;

Registro2705 crear_registro2705(int id) {
    Registro2705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2705(Registro2705 r) {
    return r.valor + r.id;
}
