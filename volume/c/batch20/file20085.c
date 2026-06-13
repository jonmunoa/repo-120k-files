// fichero 20085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20085;

Registro20085 crear_registro20085(int id) {
    Registro20085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20085(Registro20085 r) {
    return r.valor + r.id;
}
