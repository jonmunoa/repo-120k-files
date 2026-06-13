// fichero 3037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3037;

Registro3037 crear_registro3037(int id) {
    Registro3037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3037(Registro3037 r) {
    return r.valor + r.id;
}
