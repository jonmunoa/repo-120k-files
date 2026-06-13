// fichero 42813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42813;

Registro42813 crear_registro42813(int id) {
    Registro42813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42813(Registro42813 r) {
    return r.valor + r.id;
}
