// fichero 20645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20645;

Registro20645 crear_registro20645(int id) {
    Registro20645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20645(Registro20645 r) {
    return r.valor + r.id;
}
