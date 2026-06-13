// fichero 50689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50689;

Registro50689 crear_registro50689(int id) {
    Registro50689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50689(Registro50689 r) {
    return r.valor + r.id;
}
