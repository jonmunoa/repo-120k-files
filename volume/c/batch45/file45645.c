// fichero 45645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45645;

Registro45645 crear_registro45645(int id) {
    Registro45645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45645(Registro45645 r) {
    return r.valor + r.id;
}
