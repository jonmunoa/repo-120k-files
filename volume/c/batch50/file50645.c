// fichero 50645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50645;

Registro50645 crear_registro50645(int id) {
    Registro50645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50645(Registro50645 r) {
    return r.valor + r.id;
}
