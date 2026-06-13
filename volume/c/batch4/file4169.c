// fichero 4169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4169;

Registro4169 crear_registro4169(int id) {
    Registro4169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4169(Registro4169 r) {
    return r.valor + r.id;
}
