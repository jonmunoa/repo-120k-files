// fichero 2565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2565;

Registro2565 crear_registro2565(int id) {
    Registro2565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2565(Registro2565 r) {
    return r.valor + r.id;
}
