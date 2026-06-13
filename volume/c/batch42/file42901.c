// fichero 42901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42901;

Registro42901 crear_registro42901(int id) {
    Registro42901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42901(Registro42901 r) {
    return r.valor + r.id;
}
