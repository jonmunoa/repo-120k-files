// fichero 38277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38277;

Registro38277 crear_registro38277(int id) {
    Registro38277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38277(Registro38277 r) {
    return r.valor + r.id;
}
