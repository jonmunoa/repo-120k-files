// fichero 53801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53801;

Registro53801 crear_registro53801(int id) {
    Registro53801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53801(Registro53801 r) {
    return r.valor + r.id;
}
