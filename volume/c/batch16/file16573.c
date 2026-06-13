// fichero 16573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16573;

Registro16573 crear_registro16573(int id) {
    Registro16573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16573(Registro16573 r) {
    return r.valor + r.id;
}
