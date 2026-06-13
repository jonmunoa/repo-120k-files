// fichero 50905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50905;

Registro50905 crear_registro50905(int id) {
    Registro50905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50905(Registro50905 r) {
    return r.valor + r.id;
}
