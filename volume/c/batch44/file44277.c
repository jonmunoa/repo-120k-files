// fichero 44277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44277;

Registro44277 crear_registro44277(int id) {
    Registro44277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44277(Registro44277 r) {
    return r.valor + r.id;
}
