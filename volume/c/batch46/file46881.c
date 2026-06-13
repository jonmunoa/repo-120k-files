// fichero 46881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46881;

Registro46881 crear_registro46881(int id) {
    Registro46881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46881(Registro46881 r) {
    return r.valor + r.id;
}
