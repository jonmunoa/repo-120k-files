// fichero 27945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27945;

Registro27945 crear_registro27945(int id) {
    Registro27945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27945(Registro27945 r) {
    return r.valor + r.id;
}
