// fichero 45985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45985;

Registro45985 crear_registro45985(int id) {
    Registro45985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45985(Registro45985 r) {
    return r.valor + r.id;
}
