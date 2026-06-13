// fichero 31689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31689;

Registro31689 crear_registro31689(int id) {
    Registro31689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31689(Registro31689 r) {
    return r.valor + r.id;
}
