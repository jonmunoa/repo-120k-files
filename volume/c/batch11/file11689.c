// fichero 11689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11689;

Registro11689 crear_registro11689(int id) {
    Registro11689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11689(Registro11689 r) {
    return r.valor + r.id;
}
