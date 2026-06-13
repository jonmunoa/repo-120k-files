// fichero 52277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52277;

Registro52277 crear_registro52277(int id) {
    Registro52277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52277(Registro52277 r) {
    return r.valor + r.id;
}
