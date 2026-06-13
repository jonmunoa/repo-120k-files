// fichero 30781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30781;

Registro30781 crear_registro30781(int id) {
    Registro30781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30781(Registro30781 r) {
    return r.valor + r.id;
}
