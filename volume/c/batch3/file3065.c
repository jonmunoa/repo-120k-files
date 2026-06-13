// fichero 3065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3065;

Registro3065 crear_registro3065(int id) {
    Registro3065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3065(Registro3065 r) {
    return r.valor + r.id;
}
