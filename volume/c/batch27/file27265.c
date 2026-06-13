// fichero 27265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27265;

Registro27265 crear_registro27265(int id) {
    Registro27265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27265(Registro27265 r) {
    return r.valor + r.id;
}
