// fichero 34533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34533;

Registro34533 crear_registro34533(int id) {
    Registro34533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34533(Registro34533 r) {
    return r.valor + r.id;
}
