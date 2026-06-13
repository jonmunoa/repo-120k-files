// fichero 21189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21189;

Registro21189 crear_registro21189(int id) {
    Registro21189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21189(Registro21189 r) {
    return r.valor + r.id;
}
