// fichero 14829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14829;

Registro14829 crear_registro14829(int id) {
    Registro14829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14829(Registro14829 r) {
    return r.valor + r.id;
}
