// fichero 9409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9409;

Registro9409 crear_registro9409(int id) {
    Registro9409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9409(Registro9409 r) {
    return r.valor + r.id;
}
