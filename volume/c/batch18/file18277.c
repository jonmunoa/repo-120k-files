// fichero 18277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18277;

Registro18277 crear_registro18277(int id) {
    Registro18277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18277(Registro18277 r) {
    return r.valor + r.id;
}
