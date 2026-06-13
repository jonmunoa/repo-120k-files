// fichero 21137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21137;

Registro21137 crear_registro21137(int id) {
    Registro21137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21137(Registro21137 r) {
    return r.valor + r.id;
}
