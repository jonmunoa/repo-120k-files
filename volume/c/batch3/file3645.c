// fichero 3645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3645;

Registro3645 crear_registro3645(int id) {
    Registro3645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3645(Registro3645 r) {
    return r.valor + r.id;
}
