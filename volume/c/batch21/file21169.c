// fichero 21169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21169;

Registro21169 crear_registro21169(int id) {
    Registro21169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21169(Registro21169 r) {
    return r.valor + r.id;
}
