// fichero 48109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48109;

Registro48109 crear_registro48109(int id) {
    Registro48109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48109(Registro48109 r) {
    return r.valor + r.id;
}
