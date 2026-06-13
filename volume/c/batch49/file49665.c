// fichero 49665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49665;

Registro49665 crear_registro49665(int id) {
    Registro49665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49665(Registro49665 r) {
    return r.valor + r.id;
}
