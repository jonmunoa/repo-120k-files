// fichero 48429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48429;

Registro48429 crear_registro48429(int id) {
    Registro48429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48429(Registro48429 r) {
    return r.valor + r.id;
}
