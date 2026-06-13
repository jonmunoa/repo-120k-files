// fichero 2977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2977;

Registro2977 crear_registro2977(int id) {
    Registro2977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2977(Registro2977 r) {
    return r.valor + r.id;
}
