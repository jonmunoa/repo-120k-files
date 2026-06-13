// fichero 45809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45809;

Registro45809 crear_registro45809(int id) {
    Registro45809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45809(Registro45809 r) {
    return r.valor + r.id;
}
