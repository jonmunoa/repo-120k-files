// fichero 32265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32265;

Registro32265 crear_registro32265(int id) {
    Registro32265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32265(Registro32265 r) {
    return r.valor + r.id;
}
