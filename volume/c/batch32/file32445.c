// fichero 32445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32445;

Registro32445 crear_registro32445(int id) {
    Registro32445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32445(Registro32445 r) {
    return r.valor + r.id;
}
