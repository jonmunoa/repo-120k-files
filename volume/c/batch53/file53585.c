// fichero 53585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53585;

Registro53585 crear_registro53585(int id) {
    Registro53585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53585(Registro53585 r) {
    return r.valor + r.id;
}
