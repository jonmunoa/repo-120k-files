// fichero 18901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18901;

Registro18901 crear_registro18901(int id) {
    Registro18901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18901(Registro18901 r) {
    return r.valor + r.id;
}
