// fichero 42717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42717;

Registro42717 crear_registro42717(int id) {
    Registro42717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42717(Registro42717 r) {
    return r.valor + r.id;
}
