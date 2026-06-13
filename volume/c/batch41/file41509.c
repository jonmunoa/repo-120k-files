// fichero 41509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41509;

Registro41509 crear_registro41509(int id) {
    Registro41509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41509(Registro41509 r) {
    return r.valor + r.id;
}
