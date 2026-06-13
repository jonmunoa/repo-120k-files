// fichero 21945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21945;

Registro21945 crear_registro21945(int id) {
    Registro21945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21945(Registro21945 r) {
    return r.valor + r.id;
}
