// fichero 20033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20033;

Registro20033 crear_registro20033(int id) {
    Registro20033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20033(Registro20033 r) {
    return r.valor + r.id;
}
