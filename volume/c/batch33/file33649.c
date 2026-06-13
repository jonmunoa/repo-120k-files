// fichero 33649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33649;

Registro33649 crear_registro33649(int id) {
    Registro33649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33649(Registro33649 r) {
    return r.valor + r.id;
}
