// fichero 46877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46877;

Registro46877 crear_registro46877(int id) {
    Registro46877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46877(Registro46877 r) {
    return r.valor + r.id;
}
