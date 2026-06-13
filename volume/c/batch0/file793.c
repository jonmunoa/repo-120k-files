// fichero 793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro793;

Registro793 crear_registro793(int id) {
    Registro793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro793(Registro793 r) {
    return r.valor + r.id;
}
