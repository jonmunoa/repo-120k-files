// fichero 8605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8605;

Registro8605 crear_registro8605(int id) {
    Registro8605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8605(Registro8605 r) {
    return r.valor + r.id;
}
