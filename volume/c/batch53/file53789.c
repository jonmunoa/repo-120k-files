// fichero 53789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53789;

Registro53789 crear_registro53789(int id) {
    Registro53789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53789(Registro53789 r) {
    return r.valor + r.id;
}
