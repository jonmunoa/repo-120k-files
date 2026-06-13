// fichero 18689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18689;

Registro18689 crear_registro18689(int id) {
    Registro18689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18689(Registro18689 r) {
    return r.valor + r.id;
}
