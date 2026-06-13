// fichero 8281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8281;

Registro8281 crear_registro8281(int id) {
    Registro8281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8281(Registro8281 r) {
    return r.valor + r.id;
}
