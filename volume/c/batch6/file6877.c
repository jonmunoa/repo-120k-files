// fichero 6877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6877;

Registro6877 crear_registro6877(int id) {
    Registro6877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6877(Registro6877 r) {
    return r.valor + r.id;
}
