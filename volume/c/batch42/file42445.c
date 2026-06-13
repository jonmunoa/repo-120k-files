// fichero 42445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42445;

Registro42445 crear_registro42445(int id) {
    Registro42445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42445(Registro42445 r) {
    return r.valor + r.id;
}
