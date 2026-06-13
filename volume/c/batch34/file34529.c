// fichero 34529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34529;

Registro34529 crear_registro34529(int id) {
    Registro34529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34529(Registro34529 r) {
    return r.valor + r.id;
}
