// fichero 42161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42161;

Registro42161 crear_registro42161(int id) {
    Registro42161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42161(Registro42161 r) {
    return r.valor + r.id;
}
