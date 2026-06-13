// fichero 9277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9277;

Registro9277 crear_registro9277(int id) {
    Registro9277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9277(Registro9277 r) {
    return r.valor + r.id;
}
