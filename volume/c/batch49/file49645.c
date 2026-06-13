// fichero 49645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49645;

Registro49645 crear_registro49645(int id) {
    Registro49645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49645(Registro49645 r) {
    return r.valor + r.id;
}
