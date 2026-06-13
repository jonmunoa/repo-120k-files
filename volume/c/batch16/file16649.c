// fichero 16649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16649;

Registro16649 crear_registro16649(int id) {
    Registro16649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16649(Registro16649 r) {
    return r.valor + r.id;
}
