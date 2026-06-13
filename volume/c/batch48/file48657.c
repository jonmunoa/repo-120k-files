// fichero 48657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48657;

Registro48657 crear_registro48657(int id) {
    Registro48657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48657(Registro48657 r) {
    return r.valor + r.id;
}
