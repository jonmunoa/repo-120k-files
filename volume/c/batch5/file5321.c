// fichero 5321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5321;

Registro5321 crear_registro5321(int id) {
    Registro5321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5321(Registro5321 r) {
    return r.valor + r.id;
}
