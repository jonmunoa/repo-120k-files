// fichero 5985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5985;

Registro5985 crear_registro5985(int id) {
    Registro5985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5985(Registro5985 r) {
    return r.valor + r.id;
}
