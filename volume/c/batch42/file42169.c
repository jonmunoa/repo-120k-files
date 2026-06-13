// fichero 42169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42169;

Registro42169 crear_registro42169(int id) {
    Registro42169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42169(Registro42169 r) {
    return r.valor + r.id;
}
