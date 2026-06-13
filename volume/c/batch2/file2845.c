// fichero 2845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2845;

Registro2845 crear_registro2845(int id) {
    Registro2845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2845(Registro2845 r) {
    return r.valor + r.id;
}
