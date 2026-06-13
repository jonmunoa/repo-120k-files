// fichero 2517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2517;

Registro2517 crear_registro2517(int id) {
    Registro2517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2517(Registro2517 r) {
    return r.valor + r.id;
}
