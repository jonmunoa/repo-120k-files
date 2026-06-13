// fichero 673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro673;

Registro673 crear_registro673(int id) {
    Registro673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro673(Registro673 r) {
    return r.valor + r.id;
}
