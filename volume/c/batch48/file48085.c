// fichero 48085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48085;

Registro48085 crear_registro48085(int id) {
    Registro48085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48085(Registro48085 r) {
    return r.valor + r.id;
}
