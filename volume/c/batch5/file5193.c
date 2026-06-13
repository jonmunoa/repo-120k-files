// fichero 5193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5193;

Registro5193 crear_registro5193(int id) {
    Registro5193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5193(Registro5193 r) {
    return r.valor + r.id;
}
