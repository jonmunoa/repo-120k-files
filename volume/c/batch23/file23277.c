// fichero 23277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23277;

Registro23277 crear_registro23277(int id) {
    Registro23277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23277(Registro23277 r) {
    return r.valor + r.id;
}
