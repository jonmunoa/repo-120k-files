// fichero 15829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15829;

Registro15829 crear_registro15829(int id) {
    Registro15829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15829(Registro15829 r) {
    return r.valor + r.id;
}
