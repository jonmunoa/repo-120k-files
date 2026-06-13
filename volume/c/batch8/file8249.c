// fichero 8249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8249;

Registro8249 crear_registro8249(int id) {
    Registro8249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8249(Registro8249 r) {
    return r.valor + r.id;
}
