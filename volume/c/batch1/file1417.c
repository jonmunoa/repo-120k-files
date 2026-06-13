// fichero 1417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1417;

Registro1417 crear_registro1417(int id) {
    Registro1417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1417(Registro1417 r) {
    return r.valor + r.id;
}
