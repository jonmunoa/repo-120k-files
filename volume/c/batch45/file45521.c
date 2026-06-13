// fichero 45521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45521;

Registro45521 crear_registro45521(int id) {
    Registro45521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45521(Registro45521 r) {
    return r.valor + r.id;
}
