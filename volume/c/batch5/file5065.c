// fichero 5065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5065;

Registro5065 crear_registro5065(int id) {
    Registro5065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5065(Registro5065 r) {
    return r.valor + r.id;
}
