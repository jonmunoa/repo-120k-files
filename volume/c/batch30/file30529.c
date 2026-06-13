// fichero 30529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30529;

Registro30529 crear_registro30529(int id) {
    Registro30529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30529(Registro30529 r) {
    return r.valor + r.id;
}
