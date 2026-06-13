// fichero 37645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37645;

Registro37645 crear_registro37645(int id) {
    Registro37645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37645(Registro37645 r) {
    return r.valor + r.id;
}
