// fichero 45205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45205;

Registro45205 crear_registro45205(int id) {
    Registro45205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45205(Registro45205 r) {
    return r.valor + r.id;
}
