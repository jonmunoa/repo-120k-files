// fichero 53293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53293;

Registro53293 crear_registro53293(int id) {
    Registro53293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53293(Registro53293 r) {
    return r.valor + r.id;
}
