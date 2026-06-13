// fichero 35141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35141;

Registro35141 crear_registro35141(int id) {
    Registro35141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35141(Registro35141 r) {
    return r.valor + r.id;
}
