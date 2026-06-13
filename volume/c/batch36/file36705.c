// fichero 36705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36705;

Registro36705 crear_registro36705(int id) {
    Registro36705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36705(Registro36705 r) {
    return r.valor + r.id;
}
