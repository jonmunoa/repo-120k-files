// fichero 16985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16985;

Registro16985 crear_registro16985(int id) {
    Registro16985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16985(Registro16985 r) {
    return r.valor + r.id;
}
