// fichero 27245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27245;

Registro27245 crear_registro27245(int id) {
    Registro27245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27245(Registro27245 r) {
    return r.valor + r.id;
}
