// fichero 2669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2669;

Registro2669 crear_registro2669(int id) {
    Registro2669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2669(Registro2669 r) {
    return r.valor + r.id;
}
