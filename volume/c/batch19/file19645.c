// fichero 19645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19645;

Registro19645 crear_registro19645(int id) {
    Registro19645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19645(Registro19645 r) {
    return r.valor + r.id;
}
