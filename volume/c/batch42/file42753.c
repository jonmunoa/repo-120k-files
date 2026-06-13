// fichero 42753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42753;

Registro42753 crear_registro42753(int id) {
    Registro42753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42753(Registro42753 r) {
    return r.valor + r.id;
}
