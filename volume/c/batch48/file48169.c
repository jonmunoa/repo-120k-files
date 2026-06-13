// fichero 48169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48169;

Registro48169 crear_registro48169(int id) {
    Registro48169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48169(Registro48169 r) {
    return r.valor + r.id;
}
