// fichero 9961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9961;

Registro9961 crear_registro9961(int id) {
    Registro9961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9961(Registro9961 r) {
    return r.valor + r.id;
}
