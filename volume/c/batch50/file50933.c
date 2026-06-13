// fichero 50933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50933;

Registro50933 crear_registro50933(int id) {
    Registro50933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50933(Registro50933 r) {
    return r.valor + r.id;
}
