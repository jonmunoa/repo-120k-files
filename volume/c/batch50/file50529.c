// fichero 50529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50529;

Registro50529 crear_registro50529(int id) {
    Registro50529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50529(Registro50529 r) {
    return r.valor + r.id;
}
