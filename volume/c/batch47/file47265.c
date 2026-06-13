// fichero 47265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47265;

Registro47265 crear_registro47265(int id) {
    Registro47265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47265(Registro47265 r) {
    return r.valor + r.id;
}
