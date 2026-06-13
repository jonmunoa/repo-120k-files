// fichero 26985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26985;

Registro26985 crear_registro26985(int id) {
    Registro26985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26985(Registro26985 r) {
    return r.valor + r.id;
}
