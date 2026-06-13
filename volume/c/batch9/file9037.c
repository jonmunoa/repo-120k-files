// fichero 9037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9037;

Registro9037 crear_registro9037(int id) {
    Registro9037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9037(Registro9037 r) {
    return r.valor + r.id;
}
