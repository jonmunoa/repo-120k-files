// fichero 21277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21277;

Registro21277 crear_registro21277(int id) {
    Registro21277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21277(Registro21277 r) {
    return r.valor + r.id;
}
