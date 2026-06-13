// fichero 46565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46565;

Registro46565 crear_registro46565(int id) {
    Registro46565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46565(Registro46565 r) {
    return r.valor + r.id;
}
