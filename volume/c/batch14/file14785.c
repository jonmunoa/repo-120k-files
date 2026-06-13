// fichero 14785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14785;

Registro14785 crear_registro14785(int id) {
    Registro14785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14785(Registro14785 r) {
    return r.valor + r.id;
}
