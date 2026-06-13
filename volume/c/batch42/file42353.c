// fichero 42353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42353;

Registro42353 crear_registro42353(int id) {
    Registro42353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42353(Registro42353 r) {
    return r.valor + r.id;
}
