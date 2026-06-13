// fichero 9421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9421;

Registro9421 crear_registro9421(int id) {
    Registro9421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9421(Registro9421 r) {
    return r.valor + r.id;
}
