// fichero 42249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42249;

Registro42249 crear_registro42249(int id) {
    Registro42249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42249(Registro42249 r) {
    return r.valor + r.id;
}
