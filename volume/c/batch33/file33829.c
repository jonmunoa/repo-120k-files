// fichero 33829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33829;

Registro33829 crear_registro33829(int id) {
    Registro33829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33829(Registro33829 r) {
    return r.valor + r.id;
}
