// fichero 50573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50573;

Registro50573 crear_registro50573(int id) {
    Registro50573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50573(Registro50573 r) {
    return r.valor + r.id;
}
