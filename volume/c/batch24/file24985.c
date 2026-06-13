// fichero 24985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24985;

Registro24985 crear_registro24985(int id) {
    Registro24985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24985(Registro24985 r) {
    return r.valor + r.id;
}
