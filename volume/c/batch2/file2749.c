// fichero 2749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2749;

Registro2749 crear_registro2749(int id) {
    Registro2749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2749(Registro2749 r) {
    return r.valor + r.id;
}
