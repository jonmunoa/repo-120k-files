// fichero 24689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24689;

Registro24689 crear_registro24689(int id) {
    Registro24689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24689(Registro24689 r) {
    return r.valor + r.id;
}
