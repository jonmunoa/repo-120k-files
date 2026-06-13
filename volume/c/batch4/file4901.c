// fichero 4901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4901;

Registro4901 crear_registro4901(int id) {
    Registro4901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4901(Registro4901 r) {
    return r.valor + r.id;
}
