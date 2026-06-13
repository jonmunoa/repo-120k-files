// fichero 42961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42961;

Registro42961 crear_registro42961(int id) {
    Registro42961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42961(Registro42961 r) {
    return r.valor + r.id;
}
