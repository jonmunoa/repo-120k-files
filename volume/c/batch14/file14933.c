// fichero 14933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14933;

Registro14933 crear_registro14933(int id) {
    Registro14933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14933(Registro14933 r) {
    return r.valor + r.id;
}
