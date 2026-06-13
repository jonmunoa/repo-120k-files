// fichero 37169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37169;

Registro37169 crear_registro37169(int id) {
    Registro37169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37169(Registro37169 r) {
    return r.valor + r.id;
}
