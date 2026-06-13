// fichero 3533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3533;

Registro3533 crear_registro3533(int id) {
    Registro3533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3533(Registro3533 r) {
    return r.valor + r.id;
}
