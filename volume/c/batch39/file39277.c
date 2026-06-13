// fichero 39277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39277;

Registro39277 crear_registro39277(int id) {
    Registro39277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39277(Registro39277 r) {
    return r.valor + r.id;
}
