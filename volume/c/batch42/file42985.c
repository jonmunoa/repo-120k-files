// fichero 42985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42985;

Registro42985 crear_registro42985(int id) {
    Registro42985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42985(Registro42985 r) {
    return r.valor + r.id;
}
