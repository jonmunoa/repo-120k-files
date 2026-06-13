// fichero 28277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28277;

Registro28277 crear_registro28277(int id) {
    Registro28277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28277(Registro28277 r) {
    return r.valor + r.id;
}
