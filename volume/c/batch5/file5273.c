// fichero 5273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5273;

Registro5273 crear_registro5273(int id) {
    Registro5273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5273(Registro5273 r) {
    return r.valor + r.id;
}
