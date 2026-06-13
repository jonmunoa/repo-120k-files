// fichero 8277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8277;

Registro8277 crear_registro8277(int id) {
    Registro8277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8277(Registro8277 r) {
    return r.valor + r.id;
}
