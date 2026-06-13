// fichero 46793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46793;

Registro46793 crear_registro46793(int id) {
    Registro46793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46793(Registro46793 r) {
    return r.valor + r.id;
}
