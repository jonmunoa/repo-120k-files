// fichero 42301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42301;

Registro42301 crear_registro42301(int id) {
    Registro42301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42301(Registro42301 r) {
    return r.valor + r.id;
}
