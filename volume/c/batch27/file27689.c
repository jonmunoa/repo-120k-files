// fichero 27689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27689;

Registro27689 crear_registro27689(int id) {
    Registro27689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27689(Registro27689 r) {
    return r.valor + r.id;
}
