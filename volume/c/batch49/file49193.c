// fichero 49193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49193;

Registro49193 crear_registro49193(int id) {
    Registro49193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49193(Registro49193 r) {
    return r.valor + r.id;
}
