// fichero 24857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24857;

Registro24857 crear_registro24857(int id) {
    Registro24857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24857(Registro24857 r) {
    return r.valor + r.id;
}
