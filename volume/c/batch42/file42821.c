// fichero 42821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42821;

Registro42821 crear_registro42821(int id) {
    Registro42821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42821(Registro42821 r) {
    return r.valor + r.id;
}
