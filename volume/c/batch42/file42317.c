// fichero 42317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42317;

Registro42317 crear_registro42317(int id) {
    Registro42317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42317(Registro42317 r) {
    return r.valor + r.id;
}
