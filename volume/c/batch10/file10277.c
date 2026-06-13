// fichero 10277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10277;

Registro10277 crear_registro10277(int id) {
    Registro10277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10277(Registro10277 r) {
    return r.valor + r.id;
}
