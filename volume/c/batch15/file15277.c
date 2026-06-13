// fichero 15277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15277;

Registro15277 crear_registro15277(int id) {
    Registro15277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15277(Registro15277 r) {
    return r.valor + r.id;
}
