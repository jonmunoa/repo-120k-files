// fichero 47429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47429;

Registro47429 crear_registro47429(int id) {
    Registro47429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47429(Registro47429 r) {
    return r.valor + r.id;
}
