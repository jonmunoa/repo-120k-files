// fichero 26065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26065;

Registro26065 crear_registro26065(int id) {
    Registro26065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26065(Registro26065 r) {
    return r.valor + r.id;
}
