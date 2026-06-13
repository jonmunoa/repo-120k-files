// fichero 24129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24129;

Registro24129 crear_registro24129(int id) {
    Registro24129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24129(Registro24129 r) {
    return r.valor + r.id;
}
