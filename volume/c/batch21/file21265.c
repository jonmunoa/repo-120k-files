// fichero 21265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21265;

Registro21265 crear_registro21265(int id) {
    Registro21265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21265(Registro21265 r) {
    return r.valor + r.id;
}
