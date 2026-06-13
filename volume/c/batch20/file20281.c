// fichero 20281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20281;

Registro20281 crear_registro20281(int id) {
    Registro20281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20281(Registro20281 r) {
    return r.valor + r.id;
}
