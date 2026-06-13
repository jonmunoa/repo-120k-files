// fichero 2585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2585;

Registro2585 crear_registro2585(int id) {
    Registro2585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2585(Registro2585 r) {
    return r.valor + r.id;
}
