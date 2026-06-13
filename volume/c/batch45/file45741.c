// fichero 45741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45741;

Registro45741 crear_registro45741(int id) {
    Registro45741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45741(Registro45741 r) {
    return r.valor + r.id;
}
