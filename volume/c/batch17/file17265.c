// fichero 17265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17265;

Registro17265 crear_registro17265(int id) {
    Registro17265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17265(Registro17265 r) {
    return r.valor + r.id;
}
