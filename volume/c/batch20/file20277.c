// fichero 20277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20277;

Registro20277 crear_registro20277(int id) {
    Registro20277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20277(Registro20277 r) {
    return r.valor + r.id;
}
