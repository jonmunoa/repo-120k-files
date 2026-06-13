// fichero 27385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27385;

Registro27385 crear_registro27385(int id) {
    Registro27385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27385(Registro27385 r) {
    return r.valor + r.id;
}
