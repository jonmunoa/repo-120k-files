// fichero 26573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26573;

Registro26573 crear_registro26573(int id) {
    Registro26573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26573(Registro26573 r) {
    return r.valor + r.id;
}
