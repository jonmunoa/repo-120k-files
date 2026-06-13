// fichero 42209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42209;

Registro42209 crear_registro42209(int id) {
    Registro42209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42209(Registro42209 r) {
    return r.valor + r.id;
}
