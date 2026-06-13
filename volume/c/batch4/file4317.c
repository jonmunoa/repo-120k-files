// fichero 4317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4317;

Registro4317 crear_registro4317(int id) {
    Registro4317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4317(Registro4317 r) {
    return r.valor + r.id;
}
