// fichero 2929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2929;

Registro2929 crear_registro2929(int id) {
    Registro2929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2929(Registro2929 r) {
    return r.valor + r.id;
}
