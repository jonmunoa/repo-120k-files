// fichero 50277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50277;

Registro50277 crear_registro50277(int id) {
    Registro50277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50277(Registro50277 r) {
    return r.valor + r.id;
}
