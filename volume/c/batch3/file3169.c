// fichero 3169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3169;

Registro3169 crear_registro3169(int id) {
    Registro3169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3169(Registro3169 r) {
    return r.valor + r.id;
}
