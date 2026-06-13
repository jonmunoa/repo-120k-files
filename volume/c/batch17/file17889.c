// fichero 17889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17889;

Registro17889 crear_registro17889(int id) {
    Registro17889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17889(Registro17889 r) {
    return r.valor + r.id;
}
