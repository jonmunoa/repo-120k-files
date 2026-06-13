// fichero 5329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5329;

Registro5329 crear_registro5329(int id) {
    Registro5329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5329(Registro5329 r) {
    return r.valor + r.id;
}
