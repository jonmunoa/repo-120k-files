// fichero 9269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9269;

Registro9269 crear_registro9269(int id) {
    Registro9269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9269(Registro9269 r) {
    return r.valor + r.id;
}
