// fichero 42477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42477;

Registro42477 crear_registro42477(int id) {
    Registro42477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42477(Registro42477 r) {
    return r.valor + r.id;
}
