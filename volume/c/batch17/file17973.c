// fichero 17973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17973;

Registro17973 crear_registro17973(int id) {
    Registro17973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17973(Registro17973 r) {
    return r.valor + r.id;
}
