// fichero 53885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53885;

Registro53885 crear_registro53885(int id) {
    Registro53885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53885(Registro53885 r) {
    return r.valor + r.id;
}
