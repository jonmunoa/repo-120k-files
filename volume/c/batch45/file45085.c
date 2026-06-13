// fichero 45085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45085;

Registro45085 crear_registro45085(int id) {
    Registro45085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45085(Registro45085 r) {
    return r.valor + r.id;
}
