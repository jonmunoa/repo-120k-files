// fichero 9509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9509;

Registro9509 crear_registro9509(int id) {
    Registro9509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9509(Registro9509 r) {
    return r.valor + r.id;
}
