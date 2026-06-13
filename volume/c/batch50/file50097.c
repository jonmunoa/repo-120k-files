// fichero 50097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50097;

Registro50097 crear_registro50097(int id) {
    Registro50097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50097(Registro50097 r) {
    return r.valor + r.id;
}
