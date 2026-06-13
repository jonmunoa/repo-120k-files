// fichero 49277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49277;

Registro49277 crear_registro49277(int id) {
    Registro49277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49277(Registro49277 r) {
    return r.valor + r.id;
}
