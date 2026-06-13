// fichero 53165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53165;

Registro53165 crear_registro53165(int id) {
    Registro53165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53165(Registro53165 r) {
    return r.valor + r.id;
}
