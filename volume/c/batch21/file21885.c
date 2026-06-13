// fichero 21885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21885;

Registro21885 crear_registro21885(int id) {
    Registro21885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21885(Registro21885 r) {
    return r.valor + r.id;
}
