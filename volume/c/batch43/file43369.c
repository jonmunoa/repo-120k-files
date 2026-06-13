// fichero 43369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43369;

Registro43369 crear_registro43369(int id) {
    Registro43369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43369(Registro43369 r) {
    return r.valor + r.id;
}
