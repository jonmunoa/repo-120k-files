// fichero 18857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18857;

Registro18857 crear_registro18857(int id) {
    Registro18857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18857(Registro18857 r) {
    return r.valor + r.id;
}
