// fichero 8725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8725;

Registro8725 crear_registro8725(int id) {
    Registro8725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8725(Registro8725 r) {
    return r.valor + r.id;
}
