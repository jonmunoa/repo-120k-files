// fichero 885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro885;

Registro885 crear_registro885(int id) {
    Registro885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro885(Registro885 r) {
    return r.valor + r.id;
}
