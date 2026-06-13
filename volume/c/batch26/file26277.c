// fichero 26277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26277;

Registro26277 crear_registro26277(int id) {
    Registro26277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26277(Registro26277 r) {
    return r.valor + r.id;
}
