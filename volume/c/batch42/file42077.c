// fichero 42077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42077;

Registro42077 crear_registro42077(int id) {
    Registro42077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42077(Registro42077 r) {
    return r.valor + r.id;
}
