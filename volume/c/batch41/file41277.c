// fichero 41277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41277;

Registro41277 crear_registro41277(int id) {
    Registro41277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41277(Registro41277 r) {
    return r.valor + r.id;
}
