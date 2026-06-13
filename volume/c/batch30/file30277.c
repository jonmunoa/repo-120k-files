// fichero 30277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30277;

Registro30277 crear_registro30277(int id) {
    Registro30277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30277(Registro30277 r) {
    return r.valor + r.id;
}
