// fichero 2085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2085;

Registro2085 crear_registro2085(int id) {
    Registro2085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2085(Registro2085 r) {
    return r.valor + r.id;
}
