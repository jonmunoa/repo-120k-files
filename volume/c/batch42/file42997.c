// fichero 42997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42997;

Registro42997 crear_registro42997(int id) {
    Registro42997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42997(Registro42997 r) {
    return r.valor + r.id;
}
