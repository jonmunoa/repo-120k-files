// fichero 34573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34573;

Registro34573 crear_registro34573(int id) {
    Registro34573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34573(Registro34573 r) {
    return r.valor + r.id;
}
