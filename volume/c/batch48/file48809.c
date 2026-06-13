// fichero 48809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48809;

Registro48809 crear_registro48809(int id) {
    Registro48809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48809(Registro48809 r) {
    return r.valor + r.id;
}
