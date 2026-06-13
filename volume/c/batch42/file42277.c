// fichero 42277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42277;

Registro42277 crear_registro42277(int id) {
    Registro42277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42277(Registro42277 r) {
    return r.valor + r.id;
}
