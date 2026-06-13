// fichero 42493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42493;

Registro42493 crear_registro42493(int id) {
    Registro42493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42493(Registro42493 r) {
    return r.valor + r.id;
}
