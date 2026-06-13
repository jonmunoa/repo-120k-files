// fichero 34629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34629;

Registro34629 crear_registro34629(int id) {
    Registro34629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34629(Registro34629 r) {
    return r.valor + r.id;
}
