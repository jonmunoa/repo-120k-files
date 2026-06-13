// fichero 6513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6513;

Registro6513 crear_registro6513(int id) {
    Registro6513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6513(Registro6513 r) {
    return r.valor + r.id;
}
