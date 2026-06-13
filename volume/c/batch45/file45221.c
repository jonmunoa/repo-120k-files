// fichero 45221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45221;

Registro45221 crear_registro45221(int id) {
    Registro45221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45221(Registro45221 r) {
    return r.valor + r.id;
}
