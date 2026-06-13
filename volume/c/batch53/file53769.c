// fichero 53769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53769;

Registro53769 crear_registro53769(int id) {
    Registro53769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53769(Registro53769 r) {
    return r.valor + r.id;
}
