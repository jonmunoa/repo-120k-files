// fichero 4181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4181;

Registro4181 crear_registro4181(int id) {
    Registro4181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4181(Registro4181 r) {
    return r.valor + r.id;
}
