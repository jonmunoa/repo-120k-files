// fichero 48941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48941;

Registro48941 crear_registro48941(int id) {
    Registro48941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48941(Registro48941 r) {
    return r.valor + r.id;
}
