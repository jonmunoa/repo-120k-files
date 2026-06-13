// fichero 9413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9413;

Registro9413 crear_registro9413(int id) {
    Registro9413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9413(Registro9413 r) {
    return r.valor + r.id;
}
