// fichero 37933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37933;

Registro37933 crear_registro37933(int id) {
    Registro37933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37933(Registro37933 r) {
    return r.valor + r.id;
}
